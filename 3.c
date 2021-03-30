#include <stdio.h>
#include <string.h>
#define MAX_INDEX 100

typedef struct _champ
{
    char name[20];
    int HP;
    int MANA;
    char Q_skill[20];
    char W_skill[20];
    char E_skill[20];
    char R_skill[20];
} champ;

int main()
{

    champ teemo = {
        .name = "Ƽ��",
        .HP = 528,
        .MANA = 334,
        .Q_skill = "�Ǹ��Ʈ",
        .W_skill = "�ż����̵�",
        .E_skill = "�͵���Ʈ",
        .R_skill = "����������" };


    char skillInput[MAX_INDEX] = { 0, };
    printf("� ��ų�� ����Ͻðڽ��ϱ�? : ");
    scanf("%s", &skillInput);
    printf("%s �ߵ�!!!\n", skillInput);
    int mpPoint = 0;
    int mpResult;

    if (strcmp(skillInput, teemo.Q_skill) == 0 || strcmp(skillInput, teemo.W_skill) == 0 || strcmp(skillInput, teemo.E_skill) == 0 || strcmp(skillInput, teemo.R_skill) == 0)
    {
        for (int i = 0; i < MAX_INDEX; i++)
        {
            if (skillInput[i] != 0)
            {
                mpPoint++;
            }
            else if (skillInput[i] == 0)
            {
                mpResult = teemo.MANA - (mpPoint/2);
                printf("���� �Ҹ� (%d -> %d, ���� %d ���!)", teemo.MANA, mpResult, mpPoint/2);     //�ѱ��� ����� �޸� 2����Ʈ�� �迭�� ���̰� 2��� �þ ���� 2�� ����
                break;
            }
        }
    }
    else {
        printf("��ų�� �߸� �Է��߽��ϴ�!");
    }
    return 0;
}
