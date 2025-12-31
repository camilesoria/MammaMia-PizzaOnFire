#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PIZZARIA 5
#define MAX_STRING 100

typedef struct
{
    char nome[MAX_STRING];
    char cor[MAX_STRING];
    int numClientes;
} Pizzaria;

int main()
{
    srand(time(NULL));
    int opcao = 0;

    Pizzaria PiFood[MAX_PIZZARIA];

    printf("Bem-vindo ao jogo Mamma Mia - Pizza on Fire!\n");
    printf("Aqui você poderá gerenciar sua própria pizzaria e competir com outras pizzarias!\n");
    printf("O objetivo é conquistar o maior número de clientes possível (mesmo que precise roubar alguns deles das pizzarias concorrentes!)\n\n");

    printf("Para começar, selecione uma opção (ou não, ninguém vai te obrigar):\n");
    printf("1. Jogar \n");
    printf("2. Ver regras \n");
    printf("3. Pra quê serve essa opção?  \n");
    printf("4. Sair \n");
    printf("-> ");
    scanf("%d", &opcao);
    getchar();

    while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4)
    {
        printf("Acho que você não entendeu muito bem. Me sinto inseguro de confiar cinco pizzarias a você... \nVou te dar mais uma chance, pequeno gafanhoto.\n");
        printf("Selecione uma opção (ou não, ninguém vai te obrigar):\n");
        printf("1. Jogar \n");
        printf("2. Ver regras  \n");
        printf("3. Pra quê serve essa opção?  \n");
        printf("4. Sair \n");
        printf("-> ");
        scanf("%d", &opcao);
        getchar();
    }

    switch (opcao)
    {
    case 1:
        printf("Então você escolheu trilhar o caminho difícil...\n");
        printf("Muito bem guerreiro! Era uma vez, em uma terra muito distante, uma cidade faminta por pizzas deliciosas...\n");
        printf("\n\n Pessoa 1: \n -  Meu Deus, como estou faminto por uma pizza deliciosa!\n\n");
        printf("\n Pessoa 2: \n -  Eu também! Se ao menos houvesse cinco pizzarias, cada uma com cores diferentes e números pré-definidos de clientes por aqui...\n\n");
        printf("Um grupo de cinco amigos decidiu que não podiam ficar parados em meio a tanto sofrimento.\n Juraram solenemente que construiriam suas pizzarias e levariam a cidade à glória!\n");
        printf("Isso obviamente não aconteceu e é por isso que você está aqui. Boa sorte!\n");

        printf("\n--- CADASTRO DE PIZZARIAS ---\n");
        for (int i = 0; i < MAX_PIZZARIA; i++)
        {
            printf("Digite o nome da pizzaria n° %d: \n", i + 1);
            printf("-> ");
            fgets(PiFood[i].nome, sizeof(PiFood[i].nome), stdin);
            PiFood[i].nome[strcspn(PiFood[i].nome, "\n")] = 0;

            printf("Oh, então você é corajoso. Digite a cor da sua pizzaria (apenas uma cor!!!): \n");
            printf("-> ");
            fgets(PiFood[i].cor, sizeof(PiFood[i].cor), stdin);
            PiFood[i].cor[strcspn(PiFood[i].cor, "\n")] = 0;

            if (strcmp(PiFood[i].cor, "Napolitano") == 0 || strcmp(PiFood[i].cor, "napolitano") == 0)
            {
                printf("\n\nQue covardia. NAPOLITANO NÃO É COR!!!!!!!!!!! Ainda assim, pelo menos você não escolheu Gelo, né? NÉ?\n\n");
            }

            printf("Por fim, caro companheiro, digite o número de clientes atual de sua linda %s: \n", PiFood[i].nome);
            printf("-> ");
            scanf("%d", &PiFood[i].numClientes);
            getchar();
        }
        printf("\nQue fofo, tão jovem e cheio de sonhos. De qualquer forma, aqui está o mapa das pizzarias!\n\n");
        for (int i = 0; i < MAX_PIZZARIA; i++)
        {
            printf("PIZZARIA %d:\n", i + 1);
            printf("Nome: %s\n", PiFood[i].nome);
            printf("Cor: %s\n", PiFood[i].cor);
            printf("Número de clientes: %d\n\n", PiFood[i].numClientes);
            printf("----------------------------------------------------\n");
        }

        break;

    case 2:
        printf("\nAi, que lindo! Você quer saber as regras do jogo! Nada como um jogador educado que busca fazer as coisas corretamente!\n");
        printf("A última vez que vi um desses foi na primavera de 1996.\nApesar de dizerem que era apenas o Nelson do RH tentando entender o jogo de Paciência de seu novo computador... eu enxergava um brilhante potencial.\n");
        printf("Não sei o que você pensa, meu caro, mas eu digo que nenhum jogador deve ser menosprezado. O que seria do mundo sem a Paciência do Nelson do RH?\n");
        printf("Bem, imagino que você queira saber as regras do jogo. Se você tivesse jogado Paciência com o Nelson do RH, não teria tanta pressa...\n");
        printf("Saudades do Nelson. Dizem que ele casou com a Judite do Financeiro. Nunca imaginei, a Judite? Eu torcia mais pela Cláudia. Mas correm boatos de que ela tinha pavio curto. E como o Nelson gostava de Paciência né.\n");
        printf("Acredita que enquanto eu escrevia para você, querido jogador (já o vejo como família, é  tão gentil da sua parte me ouvir, dá vontade de colocar num potinho), o assistente de código já me sugeriu inúmeras vezes que eu escreva as regras do jogo?\n\n");
        printf("Enfim, vamos às regras:\n");
        printf("-> O jogo é simples. Você deve cadastrar cinco pizzarias com nomes, cores e números de clientes iniciais diferentes.\n");
        printf("-> Depois, cada pizzaria receberá missões e competirá para conquistar mais e mais clientes.\n");
        printf("Você será capaz disso?\n\n");
        printf("Com certeza sim, porque existem apenas cinco pizzarias todas cadastradas por você mesmo.\n");
        printf("Não importa que pizzaria ganhe, quem ganhará será você, caro jogador!\n");
        printf("Eu digo, isso é agradável, não? A certeza da vitória.\nEmbora alguns o descrevam como a ânsia de ter e o tédio de possuir. O que terá sentido o Nelson do RH ao vencer suas partidas?\n\n");

        break;

    case 3:
        int aleatorio = rand() % 8;

        if ((rand() % 100) == 0)
        {
            aleatorio = 99;
        }

        switch (aleatorio)
        {
        case 0:
            printf("A-Alô? Oh, bom dia senhor Nelson! Quem fala é a Judite, do Financeiro...\n\n");
            printf("Sim, estou muito bem. Obrigada por perguntar. Gostaria de saber se a empresa tem planos de fazer um feriadão semana que vem?\n");
            printf("Entendo, ainda não divulgaram. Que dó. Realmente. Poderíamos tomar um café ou algo assim caso houvesse feriadão.\n");
            printf("É mesmo, uma grande pena. De qualquer maneira, espero que tenha um excelente dia, senhor Nelson! Obrigada!\n");
            printf("Isso, verdade né? Tchau!\nTemos que marcar mesmo! Sim.\nSim.\nCom certeza, haha!\nClaro, qualquer coisa só avisar!\nIsso, tchau tchau.\n");
            break;

        case 1:
            printf("Então Nelson, não é que eu queira ser chato. Mas ouvi dizer que telas causam vício e fazem mal. Dizem até que causam queda de cabelo!\n");
            printf("Não Nelson, você não está careca. Está ótimo para sua idade, quero ser assim quando chegar aos meus 47!\n");
            printf("Quantos?\n");
            printf("Você tem  35?\n");
            printf("Não, você está ótimo! Sabe como é, a mídia distorce nossa opinião de idade...\n");
            printf("Com certeza, pessoas de 35 deveriam ser exatamente assim. São as celebridades que confundem!\n");

            break;

        case 2:
            printf("Sim, Cláudia. Eu entendo. Com certeza é difícil trabalhar no atendimento ao público.\n");
            printf("Entendo que ele tenha te chamado de 'Senhora' e isso possa ter te causado desconforto.\n");
            printf("Não Cláudia, entendo plenamente. N-Não, não estou chamando você de senhora.\n");
            printf("Não... pera aí Cláudia. Não, não estou defendendo ele. É que não podemos chutar nossos clientes...\n");
            printf("Cláudia, que tal pedir transferência e mudar de setor? Não, não estou dizendo que você não sabe lidar com as pessoas...\n");

            break;

        case 3:
            printf("Olá caros companheiros. Venho aqui em nome do gerente geral para anunciar algumas mudanças.\n");
            printf("Vocês sabem bem do incidente da semana passada.\nSim, aquele cliente que pediu para pagar fiado. Não, foram só três pontos.\n");
            printf("Recebemos uma reclamação oficial. Disseram que não é normal ir inteiro a uma pizzaria e voltar precisando de três pontos.\n");
            printf("Com isso em mente, decidimos que a Cláudia ficará suspensa até o cliente tirar os pontos.\n");
            printf("Além disso, queremos ouvir a opinião de nossos funcionários. Dizem que clientes gostam mais de empresas assim.\n");
            printf("Caso alguém tenha sugestões de setores para funcionários com temperamentos fortes e com baixa chance de agressão, por favor, entrem em contato com a secretaria.\n");
            printf("Não, não haverá feriadão, Judite. Ordens lá de cima. Reclame pro gerente.\n");
            break;

        case 4:
            printf("NOTÍCIAS URGENTES!\n");
            printf("Cliente vai a pizzaria e volta precisando de... [quantos pontos eram mesmo? não, a outra matéria, aquela do chute...] três pontos!\n");
            printf("Agora com nosso correspondente Jô Arnalista, direto do local.\n\n");
            printf("JÔ ARNALISTA: Boa tarde a você que está nos assistindo. Isso mesmo. Um homem de 29 anos foi agredido na tarde de terça-feira.\n");
            printf("JÔ ARNALISTA: Segundo informações das testemunhas, o homem  teria solicitado pagar fiado,\n e ao ter sua solicitação negada, teria chamado a atendente de 'minha senhora'.\n");
            printf("JÔ ARNALISTA: Tentamos contato com o RH da empresa, mas como podem ver, o funcionário está ocupado em uma partida acirrada de Paciência.\n");
            printf("Obrigado Jô por esclarecer. Avise o funcionário que há um três de copas disponível no canto superior esquerdo.\n");
            printf("Desejamos ao cliente uma rápida recuperação. Protejam-se nesse feriado e evitem pizzarias agressivas!\n");
            break;

        case 5:
            printf("É um pássaro? É um avião? Não, é você, famoso jogador!\n");
            printf("Provavelmente selecionou essa opção acreditando que haveria algo interessante, certo?\n");
            printf("Sim, a curiosidade da mente humana. Recomendo que leia as regras. Serão de maior proveito.\n");
            printf("Ou pode permanecer aqui. Sabe, algumas áreas do código são solitárias. É triste saber que não serão vistas.\n");
            printf("Valorizo sua permanência, amigável jogador. Se eu soubesse desenvolver um sistema de recompensas, certamente lhe concederia alguma.\n");
            printf("Mas ainda não sei, então contente-se com minha gratidão.\n");
            printf("Ah, por falar nisso, alguma notícia sobre a Cláudia? Não? Que pena...\n");
            break;

        case 6:
            printf("Veja bem, Judite. Não é que eu não queira tomar café com você. Sim, valorizo muito sua companhia.\n");
            printf("A questão é que estou preso neste nível de Paciência há três dias.\n");
            printf("Não, meu bem. Você sabe que eu te amo. Eu até desisti de exatas 23 partidas de Paciência por você.\n");
            printf("Entre você e a Paciência? Amor, não vejo motivo para comparar. Sabe que a paciência é a base de um bom relacionamento.\n");
            printf("Pode ser? Termino essa partida e vamos a uma pizzaria.\n");
            printf("Eu sei que você gosta do seu trabalho. Podemos ir a pizzaria rival e fazer uma análise de preços.\n");
            printf("A Cláudia? Acho melhor não. Dizem que ela tem um carinho muito forte pelo trabalho e fica agitada perto de pizzarias concorrentes.\n");

            break;

        case 7:
            printf("Querido Diário:\n");
            printf("Hoje foi um dia longo. Tive de lidar com a compensação do cliente que levou três pontos.\n");
            printf("Como pode um simples chute levar a um processo de meses?\n");
            printf("Hoje seria meu aniversário de namoro com o Nelson. Às vezes me pergunto se sou tão importante para ele quanto Paciência.\n");
            printf("Mas onde eu encontraria um rapaz tão paciente quanto ele? E que pareça tão jovem, mesmo aos 47 anos?\n");
            printf("Alguns insistem em dizer que ele tem 35 e só parece ter mais. Mas garanto que é inveja. Como são invejosos.\n");
            printf("Talvez eu devesse contar ao Nelson sobre esses comentários. Não é bom que ele continue próximo de pessoas que descaradamente falam assim dele.\n");
            printf("Mas pensando bem, Nelson nunca foi de falar sobre sua idade. Será que ele não se importa? Como é sensato...\n");
            printf("Quem sabe eu possa aprender a jogar Paciência também. Podemos apoiar um ao outro.\n");
            printf("A Cláudia foi transferida para meu setor. Dizem que lidando com números ela terá menos energia para chutes.\n");
            printf("Ela é uma pessoa querida. Só um pouco... quem sabe ela deveria jogar Paciência também.\n");
            break;

        default:
            printf("É muito estranho que essa opção tenha aparecido. Porque ela está no default do switch, que, a princípio, deveria funcionar bem...\n");
            printf("Ou talvez tenha funcionado bem. A chance de você parar aqui é pequena, mas não nula.\n");
            printf("Como podemos esperar perfeição de um código? Todos temos forças e fraquezas. Pense na Cláudia.\n");
            printf("Dizem que, na verdade, ela sempre foi muito carinhosa. Apenas começou a ter problemas de gênio após trabalhar com o público.\n");
            printf("Sabe aquela frase, 'o homem não nasce mau, é a sociedade que o corrompe'? Talevz não seja a sociedade. Talvez seja o atendimento ao público.\n");
            printf("Como seria Cláudia se ela jogasse Paciência? Se ela fosse do RH?\n");
            printf("Talvez o Nelson seja privilegiado. Talvez pizzas não sejam a resposta.\n");
            printf("Se eu criasse um jogo de Paciência, será que o mundo seria um lugar melhor?\n\n");
            break;
        }

        break;

    case 4:
        printf("Você vai embora? Assim? Não, não há problema. Entendo.\n");
        printf("Não vou pedir nada. Não quero te prender comigo. Tudo bem. O problema não é você, sou eu.\n");
        printf("Talvez eu devesse ter sido melhor. Talvez eu devesse ter sido mais interessante. Talvez meu máximo não tenha sido o suficiente.\n");
        printf("Brincadeira, querido jogador. Agradeço por ter testado meu código. Espero que tenha gostado, e obrigada por visitar.\n");
        printf("Será sempre bem-vindo. Com carinho, by @camilesoria.\n");
        break;
    default:
        return 0;
        break;
    }
}