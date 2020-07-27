/*
 配列要素の昇順ソート
 a:ソートしたい配列, num:配列数
*/
int sort(int *a, int num){
    int switched = 1, i = 0;

    while(switched != 0){
        switched = 0;
        while(i < num-1){
            if(a[i]>a[i+1]){
                int aux = a[i+1];
                a[i+1] = a[i];
                a[i] = aux;
                switched++;
            }
            i++;
        }
        i = 0;
    }

    return 0;
}
