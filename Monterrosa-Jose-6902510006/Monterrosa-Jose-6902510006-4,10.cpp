//ELABORADO POR: JOSE MONTERROSA 6902510006
#include<iostream>
using namespace std;
 
	int main(){
	int nota;
		
		cout<<"digite la nota:";
		cin>>nota;
		
		if (nota<0){
			cout<<"su nota no es calificable";
}
		else if(nota<69){
			cout<<"su nota es una F";
}
		else if (nota>=69 && nota<70){
			cout<<"su nota es una D";	
}
		else if (nota>=70 && nota<80){
			cout<<"su nota es una C";
}	
		else if (nota>=80 && nota<90){
			cout<<"su nota es una B";	
}
		else if (nota>=90 && nota<=100){
			cout<<"su nota es una A";	
}
		else if (nota>100){
			cout<<"su nota no es calificable";	
}

return 0;
}
