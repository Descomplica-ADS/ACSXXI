# Entendendo a Unidade Central de Processamento de um Computador
- 5 Vídeos
- 1 Texto
- 6 Questões
- 1 Atividade Prática

## Ciclo de Instruções - Monociclo e Pipeline 📝
**Objetivos:** Compreender a diferença de uma arquitetura em pipeline e monociclo<br>
**Materiais, Métodos e Ferramentas:** Para realizar essa prática o aluno precisará somente de um computador com acesso à internet e acesso a ferramenta **DrMIPS**

**Leia atentamente o texto a seguir.**

No princípio, os computadores eram capazes de executar somente uma única instrução por ciclo, aliás, os computadores eram ainda mais restritos; além de executar somente uma única instrução por ciclo, concentravam-se em apenas um programa até que todo o programa fosse executado.<br>
Com o passar dos anos novas arquiteturas foram surgindo, e novas possibilidades também. Modelos de processadores multiciclos foram criados, e também surgiram as arquiteturas em pipeline.<br>
Assim os processadores não ficavam mais dedicados a um único programa, era possível executar parte da instrução de um programa e intercalar com a execução de parte das instruções de outro programa. Este modelo de processamento ficou conhecido como pipeline.<br>
Nesta atividade o propósito é que você compreenda a diferença entre as arquiteturas de arquiteturas monociclo e pipeline, e para auxiliar neste processo, iremos utilizar a ferramenta DrMIPS. A ferramenta está no computador remoto da Descomplica que disponibiliza o acesso através da Conexão Remota. Para realizar a atividade, veja as instruções a seguir.

**1º. Passo) Acesse em seu computador (local) a Conexão de Área de Trabalho Remota com o endereço IP do computador remoto da Descomplica e clique em conectar.**<br>
**Observação:** o endereço IP do computador remoto pode passar por atualização. Certifique-se com o professor tutor.

<p align="center"><img src="./images/conexao_de_area_de_trabalho_remota.png"></p>

**2º. Passo) Abra a ferramenta:** DrMIPS do computador remoto da Descomplica.

<p align="center"><img src="./images/drmips_atalho.png"></p>

Ao abrir o aplicativo, imediatamente é apresentada a tela a seguir.

<p align="center"><img src="./images/tela_aberta.png"></p>

**3º. Passo) Resolvendo o desafio:** Na aba código, insira o seguinte:<br>
li $s0, 10<br>
li $s1, 17<br>
add $s2, $s1, $s0

Feito isso, clique em CPU e carregue a CPU **unicycle.cpu.**
As imagens a seguir irão ajudar a entender melhor o procedimento.

<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_1.png"></p>
<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_2.png"></p>

Feito isso, na aba **caminho de dados** deverá aparecer algo semelhante ao que é apresentado na imagem a seguir.

<p align="center"><img src="./images/caminho_de_dados.png"></p>

Essa imagem representa o circuito de um processador monociclo. Caso seja necessário, você pode aumentar ou diminuir o zoom. A estrela marca o botão com a opção de aumentar.

<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_3.png"></p>
<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_4.png"></p>

**4º. Passo) Realizando a atividade:** Agora que o código foi carregado e também a CPU, podemos realizar a atividade.<br>
Observe o botão em destaque na imagem a seguir, observe também as linhas em azul.

<p align="center"><img src="./images/botao_passo_a_passo.png"></p>

O botão permite executar uma o ciclo passo a passo. As linhas azuis mostram quais componentes da cpu estão sendo acessados.

Seu **primeiro desafio** aqui é descrever passo a passo toda a sequência de execução do código que foi criado.<br>
Seu **segundo desafio** será verificar os dados finais da execução, apresentá-los e comentar. A imagem a seguir mostra como esses dados podem ser obtidos.<br>
Basicamente, basta clicar no botão com formato de relógio que fica na barra de menu superior.

<p align="center"><img src="./images/estatisticas.png"></p>

Você deverá repetir essas operações para a cpu pipeline.cpu.