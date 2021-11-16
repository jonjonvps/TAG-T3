# Universidade de Brasilia																		 
# Instituto de Ciencia Exata 																		 
# Departamento de Ciencia da Computacao

# Projeto 3 Teoria e Aplicação de Grafos

## Turma A - 1/2020
## Prof. Díbio

## Alunos:

Vinicius da Silva Rocha 18/0028804
João Victor Pinheiro de Souza 18/0103407

# Sobre o Projeto:

Considere para efeito deste projeto que uma determinada unidade da federação fez um concurso e
foram aprovados cem (100) novos professores para escolas públicas. Cada professor aprovado possui
uma (1), duas (2), ou até (3) habilitações de conteúdos em que pode atuar. Cinquenta (50) escolas se
habilitaram a receber novos professores, sendo que algumas poderão receber no máximo um (1)
professor, e outras no máximo dois (2) professores. As escolas podem indicar preferências de
professores indicando se 3, 2 ou 1 habilitação os candidatos devem ter. Por sua vez, cada professor
pode escolher uma ordem de até quatro (4) escolas onde gostaria de atuar. Neste projeto você(s)
deve(m) implementar um algoritmo que realize um emparelhamento estável máximo, devendo incluir
pelo menos 1 professor para cada escola, e indicar quantos professores poderão ser alocados
estavelmente. As soluções dadas em (Abraham, Irving & Manlove, 2007) são úteis e qualquer uma
pode ser implementada com variações pertinentes. Um arquivo entradaProj3TAG.txt com as indicações
de código do professor, habilitações e preferências de escolas, bem como das escolas com suas
preferências em termos de habilitações dos professores é fornecido como entrada. Uma versão pública
do artigo de (Abraham, Irving & Manlove, 2007) é fornecida para leitura.

# Informações Sobre o nosso criterio de preferência:

Nesse trabalho teve como preferência o professor em relação a escola, a primeira etapa era fazer um 
emparelhamento perfeito, depois que ela é feita teve que preencher com os restantes de professores com
as escolas que sobraram vagas, nesse processo foi dada primeiramente a preferência as escolas que
não tiveram nunhum professor, em seguida alocamos os restantes dos professores nas vagas restantes
sendo que eles podia entrar em uma vaga que a exigencia da habilitação era memor que a dele. 

# Observação:

No terminal vai aparecer uma lista de professores que conseguiram vaga, nela vai conter o numero 
do professor, a habilitação dele, as escolas que ele pretendia entrar, e em qual ele entrou, depois
vai mosstrar a quantidades de professores que foram alocado.

Em seguida vai aparecer a lista de escolas, informando o numero dela, as habilidades que ela exige,
e os professores que entraram nela, logo depois vai mostrar a quantidade de vagas que sobraram e quantas
escolas ficaram sem professor.

Depois vai mostrar as vagas que não foram preenchidas, mostrando as informações dos professores, e a quantidade que ficarem sem vaga de acordo com a habilidade, nas escolas vai mostrar quais vagas ficaram sem professor e o numero total de vaga não alocadas de acordo com a habilidade exigida. 

### versao do Compilador: g++ version 9.3.0 
### Execução:

Compilação do programa

```bash
make all
```

Execução do programa

```bash
./main
```

Limpeza dos Arquivos Gerados

```bash
make clean
```