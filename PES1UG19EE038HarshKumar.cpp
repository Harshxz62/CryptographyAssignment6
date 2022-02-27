#include<iostream>
#include<string>
using namespace std;

int main(){
	string key="electronics";
	string plainText="actions speak louder than words";
	char arr[26]={'e','a','p','l','b','q','c','d','u','t','f','v','r','g','w','o','h','x','n','j','y','i','k','z','s','m'};


	cout<<"Plain Text is : "<<plainText<<endl;
	string cipherText="";
	for(auto x:plainText){
		if(x==' '){
			cipherText+=' ';
		}
		else
			cipherText+=(arr[x-'a']);
	}
	cout<<"The encrypted text is : "<<cipherText<<endl;

	string decryptedText="";
	for(auto x:cipherText){
		if(x==' '){
			decryptedText+=' ';
		}
		else{
			int index=0;
			for(int i=0;i<26;i++){
				if(arr[i]==x){
					index=i;
				}
			}
			decryptedText+=(index+'a');
		}
	}
	cout<<"Decrypted Text is : "<<decryptedText<<endl;
}