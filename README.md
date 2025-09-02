#  Projeto Arduino - SENAI

Este é um projeto desenvolvido durante as aulas de Arduino no curso do **SENAI**, com início em **02/09/2025**. O objetivo é aprender e praticar conceitos básicos de programação embarcada, utilizando a plataforma **Arduino UNO** e LEDs.

##  Objetivo

Desenvolver diversos padrões de acendimento de LEDs para compreender:
- Manipulação de pinos digitais com `pinMode()` e `digitalWrite()`
- Laços de repetição (`for`)
- Funções e organização de código
- Controle de tempo com `delay()`
- Introdução à lógica de automação

##  Componentes Utilizados

- 1x Placa Arduino UNO
- 8x LEDs
- 8x Resistores (220Ω ou 330Ω)
- Jumpers
- Protoboard

##  Funcionalidades do Código

O código implementa diferentes padrões de acendimento dos LEDs:

- `vaiEVolta()`: Efeito "ping-pong", indo e voltando com o LED aceso
- `piscarTodos()`: Todos os LEDs piscam juntos
- `crescente()`: Acende os LEDs da esquerda para a direita
- `decrescente()`: Acende da direita para a esquerda
- `duploSentido()`: Acendimento duplo em direção ao centro
- `cavalgar()`: Um LED acende por vez, da esquerda para a direita
- `cavalgarInvertido()`: Um LED acende por vez, da direita para a esquerda
- `aleatorio()`: LEDs acendem em ordem aleatória

> Apenas uma dessas funções está ativa por vez na função `loop()`. As demais podem ser ativadas comentando/descomentando.

## Histórico

-  **Primeira aula:** 02/09/2025
-  **Instituição:** SENAI

---
