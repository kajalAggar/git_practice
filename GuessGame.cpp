#include <iostream>
#include <cstdlib>


void game()
{
	int max = 100;
	int min = 0;
	
	srand(time(NULL)); // Seed the time
	int finalNum = rand()%(max-min+1)+min; 

	std::cout<<std::endl;
	std::cout<<" ---------------------------------------------"<<std::endl;
	std::cout<<" Hey Do you want to play Guess a Number Game ?"<<std::endl;
	std::cout<<" Guess a number that is in my mind in 7 trails"<<std::endl;
	std::cout<<" Dont worry, I will keep helping you"<<std::endl;
	std::cout<<" The number is between 0 and 100"<<std::endl;
	std::cout<<" ---------------------------------------------"<<std::endl;
	std::cout<<std::endl;


	for (int i = 0; i<7; i++)
	{
					
		std::cout<<"Enter guess number "<<i+1<<std::endl;
		int guess;
		std::cin>>guess;
		
				

		if (guess > finalNum)
		{
			std::cout<<"Your guess is higher than my number"<<std::endl;	
			std::cout<<std::endl;			
			std::cout<<"Ready for next guess?"<<std::endl;
						
		}	
		else if (guess < finalNum)
		{
			std::cout<<"Your guess is lower than my number"<<std::endl;	
			std::cout<<std::endl;			
			std::cout<<"Ready for next guess?"<<std::endl;	
					
		}
		else if (guess == finalNum)
		{
			std::cout<<"Congratulations.. you are soo cool"<<std::endl;	
			std::cout<<"I lost! you won"<<std::endl;
			break;			
		}
	}	
	
}

bool toContinue()
{
	std::cout<<std::endl;	
	std::cout<<"Do you want to play another round (y/n)"<<std::endl;
	char c;
	std::cin>>c;
	if(c == 'yes')
	game();
	else if (c == 'no')
	return(1);
}


int main()
{
	game();
	toContinue();
	return 0;
}
