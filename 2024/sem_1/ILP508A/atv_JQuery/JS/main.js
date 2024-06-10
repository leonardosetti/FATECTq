$(document).ready(function () {
    var clickCount = 0;
    var maxClicks = 4;
    $("#_changeImageBtn").click(function () {
        clickCount++;
        if (clickCount > maxClicks) {
            clickCount = 1;
        }
        let newImage_1 = "";
        let newText_1 = "";
        let newImage_2 = "";
        let newText_2 = "";
        let newImage_3 = "";
        let newText_3 = "";
        switch (clickCount) {
            case 1:
                newImage_1 = "../IMG/dark_bl.png";
                newText_1 = "Tênis de corrida Nike Zoom Structure 20 na cor preta.  \
                O tênis possui um cabedal preto respirável com suporte dinâmico \
                Flyknit para um ajuste confortável e firme. A entressola conta com a tecnologia Zoom Air no calcanhar, \
                oferecendo amortecimento responsivo a cada passada. \
                A sola de borracha proporciona durabilidade e tração em diferentes terrenos.";
                newImage_2 = "../IMG/dark_prpl.png";
                newText_2 = "Esse tênis esportivo incrível vai te deixar na moda e com a \
                pisada leve nas suas atividades físicas. Confeccionado em material transparente \
                e respirável, ele garante conforto e frescor para os seus treinos. Design moderno \
                e transparente Material leve e respirável Solado antiderrapante \
                Combinação de cores vibrantes para te deixar cheio de estilo";
                newImage_3 = "../IMG/grey.png";
                newText_3 = "Este tênis oferece amortecimento leve e suporte para te ajudar a alcançar seus objetivos \
                de corrida. O cabedal em mesh respirável mantém seus pés frescos, enquanto a sola de borracha oferece durabilidade e tração.";
                break;
            case 2:
                newImage_1 = "../IMG/orhg_red.png";
                newText_1 = "Este tênis de corrida masculino oferece amortecimento premium com a tecnologia de \
                amortecimento usada no Kayano 20, como FlyteFoam ou GEL da Asics, garantindo uma passada suave e \
                confortável em seus treinos. O Kayano 20 também conta com o sistema [sistema de estabilidade \
                usado no Kayano 20, como Dynamic DuoMax] que auxilia no controle da estabilidade e da pronação, \
                ideal para corredores que buscam suporte extra.";
                newImage_2 = "../IMG/orng.png";
                newText_2 = "O Jordan 1 High OG “Shattered Backboard” é um tênis cobiçado por colecionadores e \
                fãs de streetwear devido ao seu design marcante e lançamento limitado.  O modelo original \
                foi lançado em 1985 e relançado várias vezes ao longo dos anos.";
                newImage_3 = "../IMG/petrol.png";
                newText_3 = "O Air Jordan 4 Retro 30th \"Teal\" foi lançado em março de 2015 para comemorar o 30º \
                aniversário da Jordan Brand. \É uma versão retro do Air Jordan 4 original, que foi lançado em 1989. \
                O tênis apresenta uma parte superior de couro premium com painéis de mesh laterais. \
                A entressola é de poliuretano para amortecimento e a sola é de borracha para tração.";
                break;
            case 3:
                newImage_1 = "../IMG/purple.png";
                newText_1 = "Domine a quadra com o estilo e a performance icônicos do tênis Adidas Barricade!\
                Esse tênis é feito pra te deixar se movimentando com confiança e conforto na quadra, graças a \
                tecnologias como Barricade, que garante estabilidade, e um cabedal em mesh respirável pra manter \
                seus pés fresquinhos.\ A gaiola de TPU oferece suporte, te deixando travado no tênis, enquanto \
                o solado de borracha resistente aguenta as partidas mais intensas.";
                newImage_2 = "../IMG/red.png";
                newText_2 = "É um tênis de corrida Nike laranja, branco e preto, com cabedal em mesh e solado \
                sintético. O tênis tem cadarço e o icônico swoosh da Nike nas laterais. Pela imagem, parece ser \
                um modelo feminino, mas a Nike oferece opções similares em tamanhos masculinos.";
                newImage_3 = "../IMG/white.png";
                newText_3 = "É um par de tênis cano alto Air Jordan 1 OG branco e preto. O cabedal é de couro com \
                furinhos na ponta (pra ventilação) e a língua é de mesh respirável. O logo clássico das \"Asas\" da Air Jordan \
                fica na lateral do cano, e o logo Jumpman na língua e no calcanhar. Apesar de serem feitos pro basquete, \
                esses tênis também são super populares pra usar no dia a dia.";
                break;
            case 4:
                newImage_1 = "../IMG/yellow.png";
                newText_1 = "Tênis de corrida Scott Kinabalu Enduro de cor amarela e laranja. Os tênis têm uma sola grossa \
                e almofadada para absorver impacto. A parte superior é feita de uma malha respirável para permitir a circulação de ar. \
                Os tênis têm cadarços laranja e o símbolo da marca Scott na lateral. ";
                newImage_2 = "../IMG/blck_yllw.png";
                newText_2 = "Tênis esportivos Jordan 4 Retro na cor preta e amarela. O tênis possui cano alto para maior \
                sustentação do tornozelo. A parte superior é feita principalmente de couro preto, com detalhes em amarelo \
                nos ilhós dos cadarços, na área do mediopé e no logo da marca Jumpman na lateral. A sola é de borracha \
                preta para maior aderência.";

                newImage_3 = "../IMG/acqua2.png";
                newText_3 = "Tênis de corrida Nike de cor azul e laranja. O tênis possui um design esportivo com um cabedal \
                respirável na cor azul.  Os detalhes em laranja aparecem no swoosh da marca Nike na lateral, na entressola e \
                no calcanhar. O tênis tem um cadarço laranja e uma sola de borracha para amortecimento e aderência.";
                break;
            // Add more cases for additional clicks
            default:
                newImage_1 = "../IMG/acqua_orng.png";
                newText_1 = "Este tênis de corrida oferece amortecimento premium com a tecnologia de amortecimento \
                da Asics usada no Kayano 20, como FlyteFoam ou GEL, garantindo uma passada suave e confortável em seus treinos. \
                O Kayano também conta com o sistema [sistema de estabilidade usado no Kayano 20, como Dynamic DuoMax] \
                que auxilia no controle da estabilidade e da pronação, ideal para corredores que buscam suporte extra.";
                newImage_2 = "../IMG/black.png";
                newText_2 = "Este tênis oferece amortecimento responsivo com a tecnologia Zoom Air da Nike, que garante \
                uma passada macia e propulsão ideal para suas corridas. O cabedal em mesh respirável mantém seus pés frescos, \
                e a sola de borracha oferece durabilidade e tração.\Cabedal em mesh respirável para conforto e ventilação.\
                Amortecimento responsivo Nike Zoom Air para impulsão.\Solado de borracha para durabilidade e tração.\
                Swoosh da Nike na lateral e texto \"Air Zoom\" no calcanhar para um estilo clássico da Nike.";
                newImage_3 = "../IMG/blck_yllw.png";
                newText_3 = "Tênis esportivos Jordan 4 Retro na cor preta e amarela. O tênis possui cano alto para \
                maior sustentação do tornozelo. A parte superior é feita principalmente de couro preto, com detalhes \
                em amarelo nos ilhós dos cadarços, na área do mediopé e no logo da marca Jumpman na lateral. \
                A sola é de borracha preta para maior aderência.";
                break;
        }
        $("#_cardImage_1").attr("src", newImage_1);
        $("#_cardText_1").text(newText_1);
        $("#_cardImage_2").attr("src", newImage_2);
        $("#_cardText_2").text(newText_2);
        $("#_cardImage_3").attr("src", newImage_3);
        $("#_cardText_3").text(newText_3);
        $("#_changeImageBtn").attr("id", "_changeImageBtn_" + clickCount);
    });
});

