#include <stdio.h>

int main (){
	int list[13]={12,32,1,0,15,55,31,10,89,24,-10,99,-89};
	int size=13;
	
	int lowerIndex,aux,i;
	for(i=0;i<size-1;i++){
		
		lowerIndex=getIndexOfLowerNumb(list,i,size);
		//cambiando de lugar items del array
		aux=list[i];
		list[i]=list[lowerIndex];
		list[lowerIndex]=aux;
	}
	//imprimiendo array ordenado
	for(i=0;i<size;i++){
		printf(" %d \n",list[i]);
	}

	return 0;
	system("pause");
}




int getIndexOfLowerNumb(int list[],int from, int to){
	int i,lowerNumber,index;
	lowerNumber=list[from];
	index=from;
	for(i=from;i<to;i++){
		if(list[i]<=lowerNumber){
			lowerNumber=list[i];
			index=i;
		}
	}
	return index;
}
