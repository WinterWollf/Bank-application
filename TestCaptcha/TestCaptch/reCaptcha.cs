using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TestCaptch
{
    public partial class reCaptcha : Form
    {
        public reCaptcha()
        {
            InitializeComponent();

            AssignIconsToSquares();
        }

        //Wartość początkowa - firstClicked
        Label firstClicked = null;

        //Wartość początkowa - secondClicked
        Label secondClicked = null;

        //Funkcja losująca symbole
        Random random = new Random();

        //Przypisanie odpowiednich symbolii, każdy sybmol wystepuje dokładnie dwa razy
        List<string> icons = new List<string>()
        {
            "!", "!", "N", "N", ",", ",", "k", "k",
            "b", "b", "v", "v", "w", "w", "z", "z"
        };

        //Przydział losowych symboli
        private void AssignIconsToSquares()
        {
            //"Przejście" przez każdą komórke tabeli
            foreach (Control control in tlPanel.Controls)
            {
                Label iconLabel = control as Label;
                if (iconLabel != null)
                {
                    int randomNumber = random.Next(icons.Count);
                    iconLabel.Text = icons[randomNumber];
                    iconLabel.ForeColor = iconLabel.BackColor;
                    icons.RemoveAt(randomNumber);
                }
            }
        }

        //Obsługa kliknięć
        private void label1_Click(object sender, EventArgs e)
        {
            if (timer1.Enabled == true)
                return;

            Label clickedLabel = sender as Label;

            if (clickedLabel != null)
            {
                //Przypadek kliknięcia odsłoniętego pola
                if (clickedLabel.ForeColor == Color.Black)
                    return;

                //Przypadek kliknięcia nieodsłoniętego pola
                if (firstClicked == null)
                {
                    firstClicked = clickedLabel; //"Zapamiętanie" pierwszego klikniętego symbolu
                    firstClicked.ForeColor = Color.Black; // Zmiana koloru na czarny

                    return;
                }

                secondClicked = clickedLabel; //"Zapamiętanie" drugiego kliknietego symbolu
                secondClicked.ForeColor = Color.Black; // Zmiana koloru na czarny

                //Sprawdzenie wygranej
                Winner();

                //Przypadek trafienia pary symboli
                if (firstClicked.Text == secondClicked.Text)
                {
                    firstClicked = null; //"Wyzerowanie" firstClicked
                    secondClicked = null; //"Wyzerowanie" secondClicked
                    return;
                }

                //Czas - start
                timer1.Start();
            }
        }

        //Obsługa czasu
        private void timer1_Tick(object sender, EventArgs e)
        {
            //Czas - stop
            timer1.Stop();

            //Ukrycie symboli
            firstClicked.ForeColor = firstClicked.BackColor; 
            secondClicked.ForeColor = secondClicked.BackColor;

            //Przywrócenie wartości domyślnych
            firstClicked = null;
            secondClicked = null;
        }

        //Sprawdzenie wygranej
        private void Winner()
        {
            //"Przejście" przez każdą komórke tabeli
            foreach (Control control in tlPanel.Controls)
            {
                Label iconLabel = control as Label;

                if (iconLabel != null)
                {
                    if (iconLabel.ForeColor == iconLabel.BackColor) //Porównanie kolorów "pierwszego planu"
                                                                    //do koloru "drugiego planu" - dla każdej komórki
                        return;
                }
            }

            //Jeżeli pętla nie "return" to nie znaleziono żadnego niesparowanego pola
            //A więc użytkownik wygrał
            MessageBox.Show("Brawo nie jesteś robotem! Autoryzacja udana",
                "reCaptcha", MessageBoxButtons.OK, MessageBoxIcon.Information);

            //Uruchomienie programu właściwego - BankApplication
            System.Diagnostics.Process Proc = new System.Diagnostics.Process();
            Proc.StartInfo.FileName = "\"C:\\Users\\wikto\\Desktop\\Bank-application\\BankApplication\\x64\\Debug\\BankApplication.exe\"";
            Proc.Start();

            //Zakończenie programu - reCaptcha
            Close();
        }
    }
}
