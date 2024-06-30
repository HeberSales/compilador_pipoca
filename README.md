# Compilador Pipoca
O Pipoca é o desenvolvimento de um compilador que é demonstrado na disciplina Compiladores - UFRRJ.

## Instalação

É necessário as ferramentas ``flex``, ``bison`` e ``gpp``.

### Ubuntu 
```console
sudo apt install build-essential flex bison
```

## Execução

Foi criado um ``Makefile`` com os comandos para a execução e o arquivo exemplo.foca será direcionado para a entrar do compilador gerado ao final do script.

```console
make
```
#### Instanciando variáveis 

```

int main()
	{
		int a;
		float b = 15.6;
		float c = -16.88; 
		char d = 'H';
		bool e = True;
		string f = "Heber";
		g := 7; 
    }

```



## Exemplos de testes

### Sprint 2

#### Global
```
int global = 9;

	int main()
	{
		print(global);
	}

```

#### Contexto (não permitir atribuir depois o b=1 pois não existe no outro escopo fora do while)
```

int main()
	{
		int a = 0

		while a < 10 {
			int b = 26;
			a++;
		}

		b = 1;
	}

```

#### If e Else
```
	int main()
		{
		int a = 0;

		if a > 10 {
			a++;
		}
		else {
			a--;
		}
	}
```
#### While e Do
```
	int main()
		{
		int a = 0;

		while a < 10 {
			a++;
		}
	}

```
```
	int main()
		{
		int a = 0;

		do {
			a++;
		} while a < 10;
	}
```
#### For 
```
	int main()
		{
		int i;

		for i = 0; i < 10; i++{
			println(i);
		}
	}
```
#### Break
```
	int main()
		{
		int i;

		for i = 0; i < 10; i++{
			if i > 5{
				break;
			}
			println(i);
		}
	}
```

#### Continue
```
	int main()
		{
		int i;
		
		for i = 0; i < 10; i++{
			if i < 5{
				continue;
			}
			println(i);
		}
	}
```

#### Entrada e Saida
```
	int main()
		{
		int a;

		scan(&a);
		print("valor de a = ");
		println(a);
	}
```
#### Concatenação de Strings
```
	int main()
		{

		string name1 = "Heber";
		string name2 = " e Davi";

		string time; 
		time = name1 + name2;

		println(time);
	}
```
