#pragma once

using namespace System;

public ref class User {
public:
	int id;
	String^ login;
	String^ password;
	String^ name;
	String^ surname;
	int money;
	String^ PESEL;
};
