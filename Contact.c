//����д������ʵ��
#include "Contact.h"
void meun()
{
	printf("*********************\n");
	printf("***1.����   2.ɾ��***\n");
	printf("***3.����   4.�޸�***\n");
	printf("***5.��ʾ   6.����***\n");
	printf("***    0.�˳�     ***\n");
	printf("*********************\n");
}

//��ʼ��ͨѶ¼�ĺ���ʵ��
void InitializeContact(struct Contact* p)
{
	memset(p->data, 0, sizeof(p->data));
	p->size = 0;
}


//������ϵ�˵ĺ�����ʵ��
void AddContact(struct Contact* p)
{
	if (p->size == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
	}
	else
	{
		printf("������Ҫ��ӵ�����->\n");
		scanf("%s", p->data[p->size].NAME);
		printf("������Ҫ��ӵ�����->\n");
		scanf("%d", &(p->data[p->size].AGE));
		printf("������Ҫ��ӵ��Ա�\n");
		scanf("%s", p->data[p->size].SEX);
		printf("������Ҫ��ӵĵ绰\n");
		scanf("%s", p->data[p->size].TELE);
		printf("������Ҫ��ӵĵ�ַ\n");
		scanf("%s", p->data[p->size].ADDRESS);
		
		p->size++;
		printf("��ӳɹ�\n");
	}
	

}


//ɾ����ϵ��
void DelContact(struct Contact* p)
{

	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ�� �޷�ɾ��\n");
	}
	else 
	{
		char name[MAX_NAME];
		printf("������Ҫɾ��������->");
		scanf("%s", name);
		//ȫ������
		int i = 0;
		for (i = 0; i < p->size; i++)
		{
			if (strcmp(p->data[i].NAME, name) == 0)
			{
				break;
			}
		}
		if (i == p->size)
		{
			printf("Ҫɾ�����˲�����\n");

		}

		else
		{
			int j = 0;
			for (j = i; j < p->size - 1; j++)
			{
				p->data[i] = p->data[i + 1];
			}
			p->size--;
			printf("ɾ���ɹ�\n");
		}
	}
	
	

}

//������ϵ�˵���Ϣ
void SearchContact(struct Contact* p)
{
	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ�� �޷�����\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("������Ҫ��ѯ�����֣�");
		scanf("%s", name);
		int i = 0;
		for (i = 0; i < p->size; i++)
		{
			if ((strcmp(p->data[i].NAME, name) == 0))
			{
				printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t", "����", "����", "�Ա�", "�绰", "��ַ");
				printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
					p->data[i].NAME,
					p->data[i].AGE,
					p->data[i].SEX,
					p->data[i].TELE,
					p->data[i].ADDRESS);
				break;

			}
			else
			{
				printf("��Ҫ���ҵ��˲�����");
			}
		}
	}
	
}

//�޸���ϵ��
void ModifyContact(struct Contxact* p)
{
	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ�� �޷��޸�\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("������Ҫ�޸ĵ���ϵ��");
		scanf("%s", name);
		int i = 0;
		for (i = 0; i < p->size; i++)
		{
			if (strcmp(p->data[i].NAME, name) == 0)
			{
				printf("������Ҫ��ӵ�����->\n");
				scanf("%s", p->data[i].NAME);
				printf("������Ҫ��ӵ�����->\n");
				scanf("%d", &(p->data[i].AGE));
				printf("������Ҫ��ӵ��Ա�\n");
				scanf("%s", p->data[i].SEX);
				printf("������Ҫ��ӵĵ绰\n");
				scanf("%s", p->data[i].TELE);
				printf("������Ҫ��ӵĵ�ַ\n");
				scanf("%s", p->data[i].ADDRESS);
				break;
			}
		}

		if (i == p->size)
		{
			printf("Ҫ���ҵ��˲�����\n");
		}

	}


}
//��ʾͨѶ¼����ϵ����Ϣ
void ShowContact(struct Contact* p)
{
	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ�� �޷���ӡ\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < p->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
				p->data[i].NAME,
				p->data[i].AGE,
				p->data[i].SEX,
				p->data[i].TELE,
				p->data[i].ADDRESS);
		}
	}
}


