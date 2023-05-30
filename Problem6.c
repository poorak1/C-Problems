

int* fairCandySwap(int* aliceSizes, int aliceSizesSize, int* bobSizes, int bobSizesSize, int* returnSize){
    int a1 = 0, b1 = 0;
    int*p=(int*)malloc(2*sizeof(int));
    * returnSize=2;
    for(int i = 0; i < aliceSizesSize; i++){
        a1 = a1 + aliceSizes[i] ;
    }
    for(int i = 0; i < bobSizesSize;i++){
        b1 = b1 + bobSizes[i];
    }


        for(int i = 0; i < bobSizesSize; i++){
            for(int j = 0; j < aliceSizesSize; j++){
                if((b1+aliceSizes[j]-bobSizes[i]) == (bobSizes[i]+a1-aliceSizes[j])){
                    p[0] = aliceSizes[j];
                    p[1] = bobSizes[i];
                    return p;
            }   
        }
     }
    return p;
}