#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int land,pr;//land储存当前到达的地区 pr储存地区完成度
int totpr[55]; //totpr[land]表示当前地区所需的完成度
int money,hp,maxhp;//不用解释了 
int backpack[35];//背包 
struct chunk{
	int chu[25][25];//储存单个区块，区块大小为20*20;
	int type;//储存区块类型，0为出生点区块，1为奖励区块，2为怪物区块，3为无功能区块，4为终点区块  
}chunkmap[55][55];//由区块组成的地图
bool find_save(){ //寻找存档 
	ifstream input;
	input.open("save\\save.sav");
	int b;
	input>>b;
	if(b==0)
		return false;
	else
		return true;
}
bool delsave(){ //删除现有存档 
	if(find_save();){
		printf("你已经有一个存档了，如果开始新游戏会使你失去这个存档\n你确定要开始新游戏吗(y/n)");
		
	}
}
int main(){
	char c;
	int ch=1;
	while(true){
		system("cls");
		if(ch==1){
			printf("\n\n     *--------------*\n     | * 开始游戏   |\n     *--------------*");
			printf("\n\n     *--------------*\n     |   继续游戏   |\n     *--------------*");
			printf("\n\n     *----------------*\n     |   制作者名单   |\n     *----------------*");
			printf("\n\n     *--------------*\n     |   退出游戏   |\n     *--------------*");
			printf("\n\n     界面操作说明：↑↓键切换，Z键选择");
		}
		if(ch==2){
			printf("\n\n     *--------------*\n     |   开始游戏   |\n     *--------------*");
			printf("\n\n     *--------------*\n     | * 继续游戏   |\n     *--------------*");
			printf("\n\n     *----------------*\n     |   制作者名单   |\n     *----------------*");
			printf("\n\n     *--------------*\n     |   退出游戏   |\n     *--------------*");
			printf("\n\n     界面操作说明：↑↓键切换，Z键选择");
		}
		if(ch==3){
			printf("\n\n     *--------------*\n     |   开始游戏   |\n     *--------------*");
			printf("\n\n     *--------------*\n     |   继续游戏   |\n     *--------------*");
			printf("\n\n     *----------------*\n     | * 制作者名单   |\n     *----------------*");
			printf("\n\n     *--------------*\n     |   退出游戏   |\n     *--------------*");
			printf("\n\n     界面操作说明：↑↓键切换，Z键选择");
		}
		if(ch==4){
			printf("\n\n     *--------------*\n     |   开始游戏   |\n     *--------------*");
			printf("\n\n     *--------------*\n     |   继续游戏   |\n     *--------------*");
			printf("\n\n     *----------------*\n     |   制作者名单   |\n     *----------------*");
			printf("\n\n     *--------------*\n     | * 退出游戏   |\n     *--------------*");
			printf("\n\n     界面操作说明：↑↓键切换，Z键选择");
		}
		c=getch();
		if(c==char(38)){
			ch--;
			if(ch<1)
				ch=4;
		}
		if(c==char(40)){
			ch++;
			if(ch>4)
				ch=4;
		}
		if(c=='Z'){
			switch(ch){
				case 1:if(delsave();)
					   		new_game();
				break;
				case 2: 
			}
		}
	}
	return 0;
}
