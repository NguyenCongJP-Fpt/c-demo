#include <stdio.h>
main(){
	int a;
	int b;
	int c;
	printf("Please enter number a = ");
	scanf("%d",&a);
	printf("Please enter number b = ");
	scanf("%d",&b);
	printf("Please choice:\n (1:+ (plus), 2: - (minus), 3: * (multiplication), 4: / (division))=> ");
	scanf("%d",&c);
	if(c==1){
	printf("Your result is: %d\n",a+b);
	printf("Omedetou gozaimasu");
}
	if(c==2){
	printf("Your result is: %d\n",a-b);
	printf("Omedetou gozaimasu");
}
	if(c==3){
	printf("Your result is: %d\n",a*b);
	printf("Omedetou gozaimasu");
}	
	if(c==4){
	printf("Your result is: %d\n",a/b);
	printf("Omedetou gozaimasu");
}
 
 //cong hai so voi tham so dau vao.
 //a va b la hai so nguyen.
 int plus (int a, int b){
 	return a+b;
 }
 //tru 2 so.
 int minus (int a, int b){
 	return a-b;
 }
  //nhan hai so.
  int multiplication (int a, int b){
 	return a*b;
 }
  //chia hai so. 
 int division (int a, int b){
 	return a/b;
}
return 0;
}
