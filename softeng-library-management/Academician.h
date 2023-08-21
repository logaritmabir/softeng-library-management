#pragma once

using namespace System;

public ref class Academician {
public:
	int ID;
	String^ name;
	String^ surname;
	String^ email;
	String^ number;
	String^ password;
	int^ departmentID;
	int penalty;
};