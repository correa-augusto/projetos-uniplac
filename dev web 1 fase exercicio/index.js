// Define as respostas corretas
const respostasCorretas = ["q1c", "q2b", "q3d", "q4c", "q5a", "q6c", "q7b", "q8a", "q9d", "q10b"];

// Variável que será utilizada para detectar o envio do formulário
var envio = document.getElementById("envio");

envio.addEventListener("click", submit);

function submit(event) {
    event.preventDefault();  // Previne o comportamento padrão de envio do formulário

    const form = document.querySelector('form'); // Seleciona o formulário.
    let cont_questoes = 0; // Contador de questões corretas
    let cont_questoes_erradas = 0; //contador de questoes erradas
    let questoesCorretas = [] // Array para armazenar as questões corretas
    let questoesErradas = [] // Array para armazenar as questoes erradas

    for (let index = 0; index < respostasCorretas.length; index++) {
        const questionId = `q${index + 1}`;
        const selecionada = form.querySelector(`input[name="${questionId}"]:checked`);
        const respostaCorreta = respostasCorretas[index];

        if (selecionada && selecionada.value === respostaCorreta) {
            cont_questoes++
            questoesCorretas.push(index + 1); // Armazena a questão correta
        } else {
            questoesErradas.push(index + 1); // Armazena a questão errada
            cont_questoes_erradas++
        }
    }

    //define quão bem o usuário foi
    if (cont_questoes >= 7 && cont_questoes <= 10) {
        var percentual = "parabéns, você está acima da média de acertos"
    }
    else if (cont_questoes == 6) {
        var percentual = "você esta na media de acertos"
    }
    else if (cont_questoes <= 5) {
        var percentual = "você não atingiu a média de acertos"
    }

    //html que será adicionado via js para exibir os resultados do quiz
    let resultHTML = `
    <h1>Resultados do quiz</h1>
    <p>Você acertou ${cont_questoes} de 10 perguntas.</p>
    <p>${percentual}</p>
`;

    //Verifica se o usuario acertou alguma questão, se sim adiciona o paragrafo com as questões que ele acertou
    if (cont_questoes > 0) {
        resultHTML += `<p>questões respondidas corretamente: ${questoesCorretas.join(', ')}</p>`
    }

    //Verifica se o usuario errou uma questão, se sim adiciona o paragrafo com as questões que ele errou
    if (questoesErradas.length > 0) {
        resultHTML += `Você errou ${cont_questoes_erradas} de 10 perguntas.</p>`;
        resultHTML += `<p>Você errou as questões: ${questoesErradas.join(', ')}</p>`;
    }

    //adiciona um botão para reiniciar o quiz
    resultHTML += `<a class="button" href="quiz.html">Reiniciar</a>`

    const resultDiv = document.getElementById("result");
    resultDiv.innerHTML = resultHTML;
}