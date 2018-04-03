/*************************************************************************
    > File Name: main.cpp
    > Author: 刘文正
    > Mail: 910972029@qq.com
    > Created Time: 2018年04月03日 星期二 16时46分31秒
 ************************************************************************/
    #include <stdio.h>
    #include <stdlib.h>
    #pragma warning(disable:4996)
    #include "Seqlist.cpp"
    int main()
    {
        //设置线性表最多可存储的元素个数max
        int max=100;
        //创建一个长度为max的空线性表
        SeqList* slist=SL_Create(max);
        //声明并读入线性表当前长度n
        int n;
        scanf("%d", &n);
        int i;
        int item;
        //循环读入n个整数，并存入到线性表中
        for (i=0; i<n; i++){
            scanf("%d", &item);
            SL_InsAt(slist, i, item);
        }
        //读入一个整数idel，并将线性表中位置idel处的数据元素删除
        int idel;
        scanf("%d", &idel);
        SL_DelAt(slist, idel);
        //读入一个整数整itemdel，并将线性表中第一次出现该值的数据元素删除
        int itemdel;
        scanf("%d", &itemdel);
        SL_DelValue(slist, itemdel);
        SL_Print(slist);
        //释放线性表空间
        SL_Free(slist);
		return 0;
    }

