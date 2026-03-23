template <class T>
T max(T arr[]){
	T max = arr[0];
	for(int i=1; i<10; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

template <class T>
T min(T arr[]){
	T min = arr[0];
	for(int i=1; i<10; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

template <class T>
double average(T arr[]){
	double sum=0;
	for(int i=0; i<10; i++){
		sum += arr[i];
	}
	return sum/10;
}
