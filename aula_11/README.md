# Recurso de Interrupção de Ciclo de CPU
- 5 Vídeos
- 1 Texto
- 6 Questões
- 1 Atividade Prática

## Tipos de Interrupção 📝
**Objetivos:** Permitir que o aluno compreenda com maior facilidade como as interrupções podem melhorar o desempenho dos sistemas computacionais<br>
**Materiais, Métodos e Ferramentas:** Para realizar essa prática o aluno precisará somente de um computador com acesso a internet, ao ambiente remoto da Descomplica e da ferramenta SOSIM.exe

**Leia atentamente o texto a seguir.**

Um importante recurso que permite aumentar consideravelmente o desempenho de sistemas computacionais, são os recursos de interrupção de ciclo de CPU. Com este tipo de recurso, a CPU não fica ociosa durante todo o tempo em que um dispositivo de entrada e saída é requisitado, aguardando que todo processamento termine, ao invés disso, a CPU realiza outras atividades, e quando o módulo de entrada e saída necessita, ele envia um aviso de interrupção a CPU<br>
Este recurso pode funcionar independentemente da existência ou não de um módulo de acesso direto à memória no computador, entretanto, quando estes módulos estão presentes, o módulo de entrada e saída pode realizar mais atividades sem a necessidade de interromper ciclos de CPU<br>
Para realizar essa atividade você utilizará a aplicação SOSIM.exe. Esta aplicação está instalada no computador virtual da Descomplica. Para realizar a atividade, siga as instruções a seguir

**1º. Passo) Acesse a Área de Trabalho Remota Descomplica, para isso clique em conectar.**<br>
**Observação:** o endereço IP do computador remoto pode passar por atualização. Certifique-se com o professor tutor

<p align="center"><img src="./images/conexao_de_area_de_trabalho_remota.png"></p>

**2º. Passo) Abra a ferramenta:** SOSIM.exe

<p align="center"><img src="./images/sosim_atalho.png"></p>

Ao abrir o aplicativo, imediatamente será apresentada uma tela semelhante a que é apresentada na ilustração abaixo

<p align="center"><img src="./images/tela_aberta.png"></p>

A primeira consideração que deve ser feita, é que esse aplicativo apresenta as telas de forma suspensa, ou seja, cada uma delas se apresenta de forma separada e independente

Os demais campos que merecem destaque, estão marcados em vermelho, e serão explicados no próximo passo

**3º. Passo) Resolvendo a atividade:** O primeiro passo, é preparar a ferramenta para que ela realize as atividades da forma como esperado. Sendo assim, clique no botão criar, selecione o tipo CPU-bound, crie 5 processos deste tipo. Em seguida repita a operação, agora selecionando o tipo CPU e I/O-bound (disco), nesse caso crie 4 processos. As imagens abaixo podem auxiliar nesse processo

<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_1.png"></p>
<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_2.png"></p>

Feito isso, deixe executando por algum tempo, e depois siga a seguinte instrução: clique em **Janelas -> Estatísticas**
Os dados que iremos analisar estão marcados em vermelho. Observe as figuras a seguir

<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_3.png"></p>
<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_4.png"></p>

Agora, vamos fazer uma pequena alteração nas configurações. Feche a aplicação, repita os passos anteriores, mas desta vez, vamos configurar o **tempo de espera de I/O** para o mínimo possível. Assim como demonstrado na imagem a seguir. Faça isso e deixe a aplicação executando por mais algum tempo

<p align="center"><img src="./images/etapas_da_execucao_de_instrucoes_5.png"></p>

Depois, repita a operação de **Janelas -> Estatísticas** e analise os resultados