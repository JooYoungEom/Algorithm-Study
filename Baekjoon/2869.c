int main(){
  
  long long a,b,v,count=0,days=0;
  scanf("%lld %lld %lld",&a,&b,&v);

  while(1){
    count += a;
    days ++;
    if ( count >= v){
      break;
    }
    else {
      count -= b;
    }
  }

  printf("%lld", days);

	return 0; 
}
