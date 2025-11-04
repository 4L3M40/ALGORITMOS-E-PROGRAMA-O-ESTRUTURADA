# ALGORITMOS E PROGRAMAÇÃO ESTRUTURADA (C)

Material de apoio com exercícios práticos da disciplina **Algoritmos e Programação Estruturada** (Engenharia de Software).  
Os exemplos estão em **C**, com foco em consolidar fundamentos, estruturas de controle, vetores/matrizes, `structs` e ponteiros.

## 📁 Estrutura do repositório

```
.
├─ U1-fundamento-de-algoritimos-e-programação/
├─ U2-estrutura-de-controle-e-repetição/
├─ U3-vetores-matrizes-structs-ponteiros/
└─ .vscode/   (configurações do VS Code, se aplicável)
```

Cada pasta agrupa exercícios por unidade/tema da disciplina.

## 🚀 Como executar os exercícios

> Requisitos: **GCC** (ou MinGW no Windows) e terminal (bash, PowerShell, CMD). Qualquer editor de texto/IDE funciona; recomenda-se **VS Code**.

### Linux / macOS
No diretório do exercício (onde está o `main.c` ou o arquivo fonte principal):

```bash
gcc main.c -o programa
./programa
```

### Windows (PowerShell/CMD)
```bat
gcc main.c -o programa.exe
programa.exe
```

> Se um exercício tiver vários arquivos `.c`, compile todos:
```bash
gcc *.c -o programa
```

## 🧭 Convenções sugeridas (organização)

Para manter tudo limpo e fácil de navegar:

- Um exercício por pasta, por exemplo:
  ```
  U2-estrutura-de-controle-e-repetição/
    ├─ ex-01-if-basico/
    │   ├─ main.c
    │   └─ README.md   (enunciado rápido + como rodar)
  ```
- Nome dos exercícios: `ex-XX-descricao-curta`.
- Arquivo principal preferencial: `main.c`.
- Se usar inputs de exemplo, crie um `inputs.txt`.

## ✅ Padrões de código

- Use `printf`/`scanf` com especificadores corretos (`%d`, `%f`, `%lf`, `%c`, `%s`).
- Inicialize variáveis; evite lixo de memória.
- Prefira funções pequenas e nomes claros (`calcularMedia`, `lerVetor`, etc.).
- Comente pontos-chave (o “porquê” do código).
- Para exercícios com arrays, valide índices e tamanhos.

> Dica: se desejar padronizar o estilo, adicione um `clang-format` futuramente.

## 🧪 Testando rapidamente

Você pode automatizar testes simples redirecionando entradas:

```bash
./programa < inputs.txt
```

E comparar com um `expected.txt`:

```bash
./programa < inputs.txt > output.txt
diff output.txt expected.txt
```

(Em Windows, use `fc expected.txt output.txt`.)

## 🗺️ Roadmap (próximos passos)

- [ ] Adicionar um `README.md` curto dentro de cada exercício com **enunciado** e **exemplo de execução**.  
- [ ] Incluir casos de teste (`inputs.txt`/`expected.txt`) nos exercícios que dependem de entrada do usuário.  
- [ ] (Opcional) Adicionar um `Makefile` para compilar com `make`.  
- [ ] (Opcional) Habilitar **GitHub Actions** para compilar automaticamente os exercícios em cada *push*.  
- [ ] (Opcional) Adicionar uma licença (`LICENSE`, por ex. MIT).  

## 🤝 Contribuição

1. Faça um fork do repositório  
2. Crie um branch: `git checkout -b feat/nome-da-melhoria`  
3. Commit: `git commit -m "feat: descreva a melhoria"`  
4. Push: `git push origin feat/nome-da-melhoria`  
5. Abra um Pull Request

## 👤 Autor

**4L3M40** — repositório em evolução com foco em aprendizagem contínua.
