#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    // {
    //     Brain brain;

	//     std::string ideas[100] = {
	// 							"meowiing...",
	// 							"eating...",
	// 							"sleeping...",
	// 							"thinking....(WHY NOT?!)",
	// 							"scratching...",
	// 							"Getting upset for no reason...",
	// 							"sdjkhdsak",
	// 							"SseDjNunpK",
	// 							"YSWkdwjyIM",
	// 							"JEvDeIUjRs",
	// 							"GWFCKXQLVF",
	// 							"ESZHTEsLUm",
	// 							"ugbWVMwACy",
	// 							"UTQoxqEFUM"
	// 						};

	// for (int i = 0; i < 14; i++){
	// 	brain.setIdea(i, ideas[i]);
	// }

	// A_Animal **animals = new A_Animal*[4];

	// for (int i = 0; i < 4; i++){
	// 	if (i < 2){
	// 		animals[i] = new Dog;
	// 	} else{
	// 		animals[i] = new Cat;
	// 	}
	// }

	// for (int i = 0; i < 4; i++){
	// 	if (i == 0){
	// 		std::cout << "-------------------DOG's SOUND--------------------"<< std::endl;
	// 	}else if (i == 2) {
	// 		std::cout << "-------------------CAT's SOUND--------------------"<< std::endl;
	// 	}
	// 	animals[i]->makeSound();
	// }

	// for (int i = 0; i < 4; i++)
	// 	delete animals[i];
	
	// delete[] animals;
    // }

    // {
	// 	 Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	delete j;//should not create a leak
	// 	delete i;
    // }

	// {
	// 	A_Animal a;
	// }

    system("leaks Animal");
}