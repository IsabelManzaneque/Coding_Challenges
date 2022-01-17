
#include <iostream>
#include <string>


using namespace std;

void printCharacter(int indice){

    if(indice%4==1) cout <<"@";
    else if(indice%4==2) cout <<".";
    else if(indice%4==3) cout <<"o";
    else if(indice%4==0) cout <<".";

}

int main() {

    int lado = 0;

    cout<< " Enter the length of the rhombus's side (1-20) : ", cin>>lado;

    if(lado < 1 || lado > 20) cout << " The length must be a number between 1 and 20" <<endl;
    else{

          // top half of the rhombous

          for (int altura = 1; altura <= lado; altura++){

                for(int indice = 1; indice <= lado-altura; indice++){
                    cout <<" ";
                }

                for (int indice = 1; indice<= altura; indice++){
                    printCharacter(indice);
                }

                for (int indice=altura-1; indice >= 1; indice--){
                    printCharacter(indice);
                }

                cout << endl;
           }

          // bottom half of the rhombous

          for (int altura = 1; altura <= lado; altura++){

                for(int indice = 1; indice <= altura; indice++){
                    cout <<" ";
                }

                for(int indice = 1; indice <= lado-altura; indice++){
                    printCharacter(indice);
                }

                for(int indice = (lado-altura)-1; indice>=1; indice--){
                    printCharacter(indice);
                }

                cout << endl;
          }
     }
}


