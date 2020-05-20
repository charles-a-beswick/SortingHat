#include <iostream>

int main() {

	//initialise all variables 
	int gryffindor = 0;
	int hufflepuff = 0;
	int ravenclaw = 0;
	int slytherin = 0;

	int ans1;
	int ans2;
	int ans3;
	int ans4;

	std::cout << "Welcome to the sorting hat quiz!" << std::endl;

	// First Question
	std::cout << "Q1 When I'm dead, I want people to remember me as:" << std::endl;

	std::cout << " 1) The Good \n 2) The Great\n 3) The Wise\n 4) The Bold" << std::endl;
	std::cin >> ans1;

	if (ans1 == 1) {
		hufflepuff++;
	}
	else if (ans1 == 2) {
		slytherin++;
	}
	else if (ans1 == 3) {
		ravenclaw++;
	}
	else if (ans1 == 4) {
		gryffindor++;
	}
	else {
		std::cout << "Invalid input" << std::endl;
	}

	//Second Question
	std::cout << "Q2) Dawn or Dusk?" << std::endl;
	std::cout << " 1) Dawn \n 2) Dusk " << std::endl;

	std::cin >> ans2;

	if (ans2 == 1) {
		gryffindor++;
		ravenclaw++;
	}
	else if (ans2 == 2) {
		hufflepuff++;
		slytherin++;
	}
	else {
		std::cout << "Invalid input" << std::endl;
	}

	//Question 3
	std::cout << "Q3) Which kind of instrument most pleases your ear?" << std::endl;
	std::cout << " 1) The Violin \n 2) The trumpet \n 3) The piano \n 4) The drum" << std::endl;

	std::cin >> ans3;

	if (ans3 == 1) {
		slytherin++;
	}
	else if (ans3 == 2) {
		hufflepuff++;
	}
	else if (ans3 == 3) {
		ravenclaw++;
	}
	else if (ans3 == 4) {
		gryffindor++;
	}
	else {
		std::cout << "Invalid input" << std::endl;
	}

	std::cout << "Q4) Which road tempts you most?" << std::endl;
	std::cout << " 1) The wide, sunny grassy lane \n 2) The narrow, dark, lantern-lit alley \n 3) The twisting, leaf-strewn path through woods \n 4) The cobbled street (ancient buildings)" << std::endl;

	std::cin >> ans4;

	if (ans4 == 1) {
		hufflepuff++;
	}
	else if (ans4 == 2) {
		slytherin++;
	}
	else if (ans4 == 3) {
		gryffindor++;
	}
	else if (ans4 == 4) {
		ravenclaw++;
	}
	else {
		std::cout << "Invalid input" << std::endl;
	}

	int max = 0;
	std::string house;

	if (gryffindor > max) {
		max = gryffindor;
		house = "Gryffindor";
	}

	if (ravenclaw > max) {
		max = ravenclaw;
		house = "ravenclaw";
	}

	if (hufflepuff > max) {
		max = hufflepuff;
		house = "Hufflepuff";
	}

	if (slytherin > max) {
		max = slytherin;
		house = "slytherin";
	}


	std::cout << "Your house is: " << house << "!" << std::endl;

}
