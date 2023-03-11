    float sum(float x, float y){
            int sum = x+y;
            printf("the result = %d",sum);
            return sum;
        }
    float sub(float x, float y){
        int diff=x-y;
        printf("the result = %d",diff);
        return diff;
        }
    float div_(float x, float y){
        if (y==0){
                printf("undefined");
                return 'undefined';
        }
                float res=(float)x/(float)y;
                printf("the result = %.2f", res);
                return res;
    }
    int fact(int n){
        if (n<=1){
            return 1;
        }
        else{
            return n*fact(n-1);
        }
    }
