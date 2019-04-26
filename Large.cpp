#include <iostream>
#include <string.h>
#include <stdio.h>


	


void checkingWord()
{
	std::cout<<"write your word now?"<<std::endl;
	char guess[6];	
	std::cin.getline(guess, 6);
	std::cout<<std::endl;
	
		
	int number;
	std::cout<<"How many letters word you are guessing?"<<std::endl;
	std::cin>>number;
	



	if (number <= 3 || number > 5)
	std::cout<<"You have to guess only 4, 5 letter words"<<std::endl;	


	
	
  	if(number == 5)
  	{			
		char FirstWord[6] = "regal";
		char SecondWord[6] = "glare";
		char ThirdWord[6] = "lager";	
	
		if (strcmp (guess,FirstWord) == 0)
		{	
			std::cout<<"your word is accepted"<<std::endl;
			std::cout<<"It means ...... "<<std::endl;
			std::cout<<std::endl;

		} else if (strcmp (guess,SecondWord) == 0)
		{	
			std::cout<<"your word is accepted"<<std::endl;
			std::cout<<"It means fierce or angry stare "<<std::endl;
			std::cout<<std::endl;

		} else if (strcmp (guess,ThirdWord) == 0)
		{	
			std::cout<<"your word is accepted"<<std::endl;
			std::cout<<"It means beer, that is pale in color "<<std::endl;
			std::cout<<std::endl;

		} else 
		{
			std::cout<<"Your 5 letters word in not accepted"<<std::endl;
			std::cout<<"It doesnot mean anything to us"<<std::endl;
			std::cout<<std::endl;

		}
  	}else if (number == 4)
  	{
		char FirstWord[6] = "rage";
		char SecondWord[6] = "rale";
		char ThirdWord[6] = "real";
		char FourthWord[6] = "gear";
		char FifthWord[6] = "gale";
	
	
	
		if (strcmp (guess,FirstWord) == 0)
		{	
			std::cout<<"your word is accepted"<<std::endl;
			std::cout<<"It means anger"<<std::endl;
			std::cout<<std::endl;

		} else if (strcmp (guess,SecondWord) == 0)
		{	
			std::cout<<"your word is accepted"<<std::endl;
			std::cout<<"It refers to a particular type of sounds coming from lungs! "<<std::endl;
			std::cout<<std::endl;

		} else if (strcmp (guess,ThirdWord) == 0)
		{	
			std::cout<<"your word is accepted"<<std::endl;
			std::cout<<"It means actually existing thing or situation"<<std::endl;
			std::cout<<std::endl;

		} else if (strcmp (guess,FourthWord) == 0)
		{	
			std::cout<<"your word is accepted"<<std::endl;
			std::cout<<"It refers to a particular equipment designed to serve a specific purpose"<<std::endl;
			std::cout<<std::endl;

		} else if (strcmp (guess,FifthWord) == 0)
		{	
			std::cout<<"your word is accepted"<<std::endl;
			std::cout<<"It means very strong wind"<<std::endl;
			std::cout<<std::endl;

		} else 
		{
			std::cout<<"Your 4 letters word in not accepted"<<std::endl;
			std::cout<<"It doesnot mean anything to us"<<std::endl;
			std::cout<<std::endl;
		}
	  }
	
	}







int main()
{
	std::cout<<std::endl;
	std::cout<<"For a given word: 'Large'"<<std::endl;
        std::cout<<"Lets see what all 5, 4 letters word you can make?"<<std::endl;
	std::cout<<"To inform you, you can make 3 five letter words and 5 four letter words"<<std::endl;
	std::cout<<"Get set go....."<<std::endl;
	std::cout<<std::endl;

	


	checkingWord();

	
	
	return 0;

} 

