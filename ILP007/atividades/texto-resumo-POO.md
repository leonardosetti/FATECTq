## 1. Histórico:

A "Engenharia de Software" teve sua origem no final da década de 1960, como uma resposta aos desafios apresentados pela chamada "Crise do Software". Contudo, durante as décadas de 1970 e 1980, diversas técnicas desenvolvidas não conseguiram solucionar os problemas relacionados à produtividade e qualidade dos softwares.
Na década de 1990, um grande número de empresas, independentemente de seu porte, já havia informatizado substancialmente parte de seus sistemas. Além disso, a disseminação da internet como meio de comunicação e busca de informações levou ao uso generalizado do computador como ferramenta de trabalho.
Essa evolução tecnológica gerou a necessidade de produzir softwares mais atrativos, dinâmicos e capazes de trocar informações de maneira eficiente. Além disso, houve uma crescente demanda por maior produtividade e qualidade na área de desenvolvimento de software.
Os softwares contemporâneos se destacam pela interação intensa com o usuário, pelo uso de interfaces gráficas, pela necessidade constante de adaptação e expansão devido às rápidas mudanças no hardware. Eles também possuem a capacidade de interagir com outros sistemas, facilitando a troca de dados entre eles, bem como a portabilidade para diversas plataformas e sistemas operacionais.
Após extensas pesquisas e testes, ficou claro que a reutilização era fundamental para aumentar a produtividade e melhorar a qualidade dos softwares. A reutilização implica em utilizar novamente algo que já foi desenvolvido, visando a ampla utilização de informações disponíveis durante o processo de desenvolvimento. Um dos principais benefícios da reutilização é a redução das etapas no ciclo de desenvolvimento de software.
No entanto, as técnicas oferecidas pela programação estruturada não eram suficientes para atender satisfatoriamente às demandas dessas aplicações complexas. Era necessário adotar uma nova abordagem, e essa abordagem foi a Programação Orientada a Objetos.
A Programação Orientada a Objetos emergiu como a técnica preferida por parte dos programadores, oferecendo uma estrutura mais adequada para o desenvolvimento de softwares interativos, reutilizáveis e altamente eficientes. Essa abordagem revolucionou a forma como os sistemas de software eram concebidos e desenvolvidos, marcando uma importante transição na história da Engenharia de Software.

## 2. Fundamentos da Programação Orientada a Objetos:

A Programação Orientada a Objetos (POO) é uma abordagem tecnológica que concebe os sistemas como coleções de objetos interconectados. Essa metodologia proporciona melhorias significativas na reutilização e extensibilidade de software, tornando-a uma pedra angular na evolução da Engenharia de Software.
A base da tecnologia orientada a objetos reside no que comumente chamamos de modelo de objetos. Esse modelo incorpora uma série de princípios fundamentais que são essenciais para compreender sua aplicação e eficácia. Vamos analisar brevemente cada um desses princípios:

1. **Abstração**: A abstração é a capacidade de representar objetos do mundo real no software, destacando apenas os atributos e comportamentos relevantes. Isso simplifica a complexidade do sistema.

2. **Hierarquização**: A hierarquização envolve a organização dos objetos em uma estrutura hierárquica, permitindo a criação de classes e subclasses. Isso promove a reutilização de código e facilita a manutenção.

3. **Encapsulamento**: O encapsulamento refere-se à prática de ocultar os detalhes internos de um objeto e expor apenas interfaces públicas. Isso protege a integridade dos dados e evita o acesso direto a eles.

4. **Classificação**: A classificação permite agrupar objetos em categorias com base em suas características comuns. Essas categorias são representadas por classes, que servem como modelos para criar objetos.

5. **Modularização**: A modularização divide o sistema em módulos independentes, facilitando o desenvolvimento e a manutenção. Cada módulo pode ser uma classe ou um conjunto de classes relacionadas.

6. **Relacionamento**: A POO permite estabelecer relacionamentos entre objetos, como associações, agregações e heranças. Isso reflete as interações do mundo real e promove a flexibilidade.

7. **Simultaneidade**: A capacidade de lidar com múltiplas tarefas de forma simultânea é fundamental na POO, permitindo a criação de sistemas que respondem a eventos e interações em tempo real.

8. **Persistência**: A persistência envolve a capacidade de armazenar objetos e seus estados de forma duradoura, geralmente em bancos de dados. Isso é crucial para sistemas que precisam manter dados entre sessões.

Esses fundamentos da Programação Orientada a Objetos formam a base teórica que guia a criação de sistemas eficientes, flexíveis e reutilizáveis. Ao adotar esses princípios, os desenvolvedores podem projetar e implementar software de alta qualidade que atende às crescentes demandas da indústria de tecnologia.

### 2.1. Paradigma Orientado por Objetos:

A proposta fundamental da Programação Orientada a Objetos (POO) é representar com fidelidade as situações do mundo real nos sistemas computacionais. No cerne desse paradigma, enxergamos o mundo como uma entidade composta por inúmeros objetos que interagem uns com os outros. De maneira análoga, a POO considera os sistemas computacionais não como uma coleção de processos estruturados, mas como uma agregação de objetos que se relacionam entre si de maneira organizada.
Os programas orientados a objetos se caracterizam por sua estrutura modular, onde os objetos agrupam estados e operações relacionadas a esses estados. Essa abordagem possui uma ênfase significativa na reutilização de código, o que contribui para a eficiência do desenvolvimento de software e a manutenção a longo prazo.
Um dos diferenciais marcantes da Programação Orientada a Objetos, quando comparada a outros paradigmas de programação que também permitem a definição de estruturas e operações, reside no conceito de herança. Através da herança, é possível estender as definições existentes de forma eficaz, permitindo que novos objetos herdem características e comportamentos de objetos existentes. É importante enfatizar também a relevância do polimorfismo, que habilita a seleção dinâmica de funcionalidades que um programa irá utilizar durante sua execução.
Portanto, podemos resumir que a Programação Orientada a Objetos é uma abordagem que considera os sistemas computacionais como uma coleção de objetos interagindo de maneira organizada, com ênfase na modularidade, reutilização de código, herança e polimorfismo como princípios-chave para a construção de sistemas robustos e flexíveis. Esses conceitos permitem que os desenvolvedores criem programas que modelam fielmente o mundo real e se adaptem de forma dinâmica às necessidades em constante evolução.

### 2.2. Principais Conceitos de POO:

#### 2.2.1. Objetos:

No contexto da Programação Orientada a Objetos (POO), o termo "objeto" é utilizado para representar elementos específicos do mundo real que possuem relevância na solução de um problema particular. Portanto, um objeto é uma entidade do mundo real que merece ser modelada e representada no ambiente de estudo.
Os objetos são instâncias de classes, que descrevem quais informações um objeto contém e quais operações ele pode executar. Um objeto é capaz de manter um estado (ou seja, informações) e disponibiliza um conjunto de operações (comportamentos) para examinar ou alterar esse estado. Em sistemas desenvolvidos com linguagens de programação orientadas a objetos, é por meio dos objetos que ocorre a maior parte do processamento.

Como exemplos de objetos, podemos citar:
- Objetos físicos, como um livro ou uma mercadoria.
- Funções desempenhadas por pessoas nos sistemas, como um cliente ou um vendedor.
- Eventos, como uma compra ou um telefonema.
- Interações entre objetos, como um item em uma nota fiscal, que representa uma interação entre uma compra e um produto do estoque.
- Locais, como a sede de uma empresa ou uma filial.

Para ilustrar, considere o exemplo de um cachorro como um objeto de estudo. Analisando esse objeto, podemos deduzir que ele possui características exclusivas, como:
- Um nome.
- Uma idade.
- Um comprimento de pelos.
- Uma cor dos pelos.
- Uma cor dos olhos.
- Um peso.
  
E assim por diante. Cada uma dessas características representa informações que o objeto "cachorro" contém em seu estado. Além disso, o objeto "cachorro" oferece operações que permitem examinar ou modificar essas informações, como calcular a idade em anos humanos, trocar a cor da coleira ou realizar outras ações relacionadas ao cachorro em questão.
Em resumo, na POO, objetos são representações de entidades do mundo real que possuem um estado e operações associadas, sendo fundamentais para modelar e resolver problemas de forma mais eficaz e organizada.
Atributos e métodos são conceitos cruciais na Programação Orientada a Objetos (POO) que nos permitem modelar objetos de maneira eficaz e interagir com eles de forma organizada.

**Atributos**:
Os atributos representam as características de um objeto, também chamadas de propriedades, que têm valores específicos. Esses valores definem o estado atual do objeto. Em termos de programação, os atributos podem ser considerados como variáveis ou campos que armazenam informações relacionadas às características dos objetos. O estado de um objeto é o conjunto de valores de seus atributos em um determinado momento. No contexto do nosso exemplo com um cachorro, podemos identificar os seguintes atributos:

- Nome: "Pluto"
- Idade: 2 anos
- Comprimento dos pelos: Curtos
- Cor dos pelos: Bege
- Cor dos olhos: Castanhos
- Peso: 5 Kg

Esses atributos definem o estado atual do objeto "Cachorro" e representam informações específicas sobre o cachorro em questão.

**Métodos**:
Os métodos, por outro lado, são ações que um objeto é capaz de executar. Também são conhecidos como serviços. São responsáveis por determinar como um objeto interage com seu ambiente e como responde a determinadas solicitações. No nosso exemplo do cachorro, podemos identificar várias ações que ele pode realizar, as quais são representadas por métodos, tais como:

- Latir
- Babar
- Correr em círculos
- Pegar a bola
- Sentar
- Comer
- Dormir

Esses métodos descrevem as ações que o objeto "Cachorro" pode realizar e permitem que interajamos com ele de maneira significativa.

**Interface**:
A interface de um objeto é o conjunto de métodos que ele disponibiliza para interação. Chama-se de interface o conjunto de serviços que um objeto oferece para que outros objetos possam utilizá-los para realizar operações. No caso do nosso cachorro, a interface incluiria os métodos listados acima.
Portanto, em resumo, na Programação Orientada a Objetos, os objetos são compostos por atributos que representam suas características e por métodos que definem suas ações. Através da interface, outros objetos podem interagir com um objeto, solicitando a execução de métodos específicos para alcançar um determinado resultado. Isso proporciona uma estrutura organizada e flexível para modelar e resolver problemas de forma mais eficiente.

#### 2.2.2. Classes:

Em Programação Orientada a Objetos (POO), uma **classe** representa um modelo ou template para a criação de objetos. Uma classe define um conjunto de atributos (características) e métodos (ações) que são compartilhados por todos os objetos que são instâncias dessa classe. Portanto, podemos dizer que um objeto é uma instância de uma classe, e esses objetos herdam as características e comportamentos definidos pela classe.
A ênfase na POO é colocada na criação das classes, que servem como blueprints para a construção de objetos. Os objetos são criados com base nas características definidas nas classes, e é por meio dessas classes que estruturamos a modelagem dos objetos em nossos programas.
Para ilustrar esse conceito, podemos observar os dois exemplos de cachorros mencionados anteriormente, "Pluto" e "Snoopy". Ambos compartilham exatamente o mesmo conjunto de atributos e métodos. Isso ocorre porque ambos são objetos da mesma classe, ou seja, eles pertencem à mesma categoria. Embora cada objeto possa ter valores diferentes para seus atributos, como nome, idade, comprimento dos pelos, entre outros, eles herdam a estrutura geral e os métodos da classe "Cachorro".
Além disso, podemos organizar as classes em hierarquias. Por exemplo, podemos ter uma classe "Mamíferos" que serve como superclasse para as classes "Cães" e "Gatos". Essa hierarquia indica que "Cães" e "Gatos" herdam características comuns, como nome, idade, peso, cor dos olhos e cor dos pelos, bem como métodos comuns, como comer, sentar e dormir, da classe "Mamíferos". Essa abordagem facilita a reutilização de código e a organização das classes em grupos relacionados.
A diferença fundamental entre classes e objetos reside no fato de que uma classe é um modelo ou gabarito que define as características e métodos comuns a todos os objetos daquela classe. Os objetos são as instâncias concretas criadas com base nesse modelo e podem ter valores específicos para seus atributos, mas compartilham os métodos e estrutura definidos pela classe.
Assim, na POO, as classes desempenham um papel central na modelagem de sistemas, permitindo a criação de objetos que compartilham características e comportamentos comuns, enquanto herdam e podem especializar os atributos e métodos definidos em classes superiores na hierarquia. Isso contribui para a organização eficaz e a reutilização de código em programas orientados a objetos.
Compreender a distinção entre classes e objetos é fundamental na Programação Orientada a Objetos (POO). As classes são as definições que indicam como os objetos devem ser, enquanto os objetos são as instâncias concretas que realmente existem e seguem essas definições.

**Instanciação**:
A instanciação ocorre quando uma classe produz um objeto. Podemos pensar na classe como um modelo ou gabarito a partir do qual os objetos são criados. De acordo com os princípios da orientação a objetos, um objeto é, em essência, uma instância de uma classe. Voltando ao nosso exemplo com cachorros, cada cachorro específico que encontramos, como "Pluto" ou "Snoopy", é uma nova instância da classe "Cães". A classe atua como um modelo para a criação desses novos objetos.

**Classes Pura ou Abstratas**:
Classes puras, também conhecidas como classes abstratas, são classes das quais os objetos nunca são instanciados diretamente. Em vez disso, objetos são sempre instanciados a partir de classes descendentes delas. Essas classes são criadas para facilitar a organização e a estruturação do código.

Um exemplo clássico é a classe "Pessoa", que pode conter atributos comuns a todas as pessoas, como nome, endereço e telefone, bem como métodos comuns, como alterar o endereço ou imprimir informações pessoais. No entanto, a classe "Pessoa" em si nunca terá um objeto instanciado diretamente a partir dela. Em vez disso, classes descendentes específicas, como "Funcionário" ou "Gerente", serão criadas a partir da classe "Pessoa" para lidar com dados relacionados a essas funções específicas.
A classe "Pessoa" serve como um ponto de unificação para atributos e métodos compartilhados pelas subclasses, evitando redundância de código. Portanto, a classe "Pessoa" é um exemplo de uma classe pura ou abstrata.
É importante notar que algumas notações sugerem que uma classe pura seja chamada de "classe-&-classe", enquanto as classes que podem ser instanciadas são chamadas de "classe-&-objeto". Isso ajuda a diferenciar entre classes que servem apenas como modelos e classes das quais os objetos podem ser diretamente criados.
Em resumo, na POO, as classes definem as características e comportamentos comuns a um grupo de objetos, enquanto os objetos são as instâncias específicas dessas classes. Classes puras ou abstratas são usadas para organizar e unificar características e métodos compartilhados por classes descendentes, evitando duplicação de código e promovendo uma estrutura mais eficiente e organizada.
