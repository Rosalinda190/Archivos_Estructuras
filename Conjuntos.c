#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#define SET_CAPACITY 15
typedef struct{
    int data[SET_CAPACITY];
    int size;
}Set;
void setupSet (Set *s);
int existElement (Set s,int value);
int addElement (Set *s,int value);
int deleteElement (Set *s,int value);
void intersect (Set a,Set b,Set *result);
void bound (Set a,Set b,Set *result);
void difference (Set a,Set b,Set *result);
void sum (Set *a,Set b);
void print(Set s);

int main() {
    int r;
    Set seta,setb,setresult;
    setupSet(&seta);
    setupSet(&setb);
    setupSet(&setresult);
    addElement(&seta,1);
    addElement(&seta,2);
    addElement(&seta,3);
    addElement(&setb,2);
    addElement(&setb,3);
    addElement(&setb,4);
    addElement(&setb,5);
    deleteElement(&setb,4);
    intersect(seta,setb,&setresult);
    print(seta);

    return 0;
}
void setupSet(Set *s){
    s->size=0;
}
int existElement (Set s,int value){
    int found=0;
    for(int i=0;i<s.size && !found;i++){
        if(s.data[i]==value)
            found=1;
    }
    return found;
}
int addElement (Set *s,int value){
    if(existElement(*s,value)==0 && s->size<SET_CAPACITY){
        s->data[s->size]=value;
        s->size++;
        return 1;
    }
    return 0;
}
int deleteElement (Set *s,int value){
    int found=-1;
    for(int i=0;i<s->size && found==-1;i++){
        if(s->data[i]==value)
            found=i;
    }
    if(found!=1){
        s->size--;
        for(int actual=found;actual<s->size;actual++){
            s->data[actual]=s->data[actual+1];
        }
        return 1;
    }
    return 0;
}
void intersect (Set a,Set b,Set *result){
    for(int i=0;i<a.size;i++){
        if(existElement(b,a.data[i])==1){
            addElement(result,a.data[i]);
        }
    }
}
void bound (Set a,Set b,Set *result){
    for(int i=0;i<a.size;i++){
        addElement(result,a.data[i]);
    }
    for(int j=0;j<b.size;j++){
        if(existElement(a,b.data[j])==0){
            addElement(result,b.data[j]);
        }
    }
}
void difference (Set a,Set b,Set *result){
    for(int i=0;i<a.size;i++){
        if(existElement(b,a.data[i])==0){
            addElement(result,a.data[i]);
        }
    }
}
void sum (Set *a,Set b){
    for(int i=0;i<b.size;i++){
        if(existElement(*a,b.data[i])==0){
            addElement(a,b.data[i]);
        }
    }

}
void print (Set s){
    printf("Intersect// Final result: ");
    for(int i=0;i<s.size;i++){
        printf("%d",s.data[i]);
    }
    printf("\n");
}
