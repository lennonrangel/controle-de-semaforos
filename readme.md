# CONTROLE DE SEMÁFOROS COM ARDUINO

## Introdução

Este é um projeto simples de controle de semáforos implementado usando a plataforma Arduino. O código apresentado aqui permite simular o funcionamento de semáforos em duas ruas, denominadas Rua A e Rua B. O sistema de semáforos alterna entre os estados de sinalização vermelho, amarelo e verde, de acordo com um padrão pré-definido.

## Visão Geral

O projeto consiste em um código escrito na linguagem C++ que controla a iluminação dos semáforos nas duas ruas. O semáforo da Rua A é controlado por um conjunto de pinos, enquanto o semáforo da Rua B é controlado por outro conjunto de pinos. Através de uma combinação de configurações e atrasos, as luzes dos semáforos são ativadas e desativadas em sequência, criando um ciclo realista de tráfego.

## Funcionalidades

- Controle Realista: O código implementa um ciclo de sinalização de semáforo semelhante ao utilizado em sistemas reais de tráfego.
- Facilmente Personalizável: Você pode ajustar os tempos de cada estado (vermelho, amarelo e verde) para adequar o ciclo às necessidades do seu projeto.
- Dois Semáforos Simulados: O projeto simula dois semáforos independentes em diferentes ruas, permitindo uma demonstração visual da alternância de sinalização.

## Requisitos e Execução 

Para executar o jogo em seu próprio sistema, siga estas etapas:

1. Certifique-se de ter uma placa Arduino, os demais componentes e o ambiente de desenvolvimento Arduino IDE instalado em seu computador.
2. Copie e cole o código fornecido no seu ambiente Arduino IDE.
3. Faça as conexões dos LEDs para representar as luzes dos semáforos nas ruas A e B, conforme os pinos definidos no código, como mostra o circuito da imagem abaixo.
4. Carregue o código na placa Arduino.
5. Observe o funcionamento dos semáforos, acompanhando o ciclo de sinalização definido no código.

<div align="center">
  <br><img src="https://github.com/user-attachments/assets/3bae8d3e-b5b7-4ab6-96f0-bf37767913b0" aling=center>
</div>

## Personalização

Você pode personalizar o código e as configurações de acordo com seus requisitos específicos. Por exemplo, você pode modificar as cores utilizadas, adicionar mais ruas e até mesmo adicionar novas funcionalidades.

## Contribuições

Se você gostaria de contribuir para este projeto, sinta-se à vontade para fazer um fork do repositório, fazer melhorias e enviar um pull request.

Divirta-se controlando seu semáforo com Arduino! 🚦🚗
