const listaChamada = require("./lista.json")
console.log(listaChamada)
listaChamada.forEach(aluno, indice => {
    if(aluno.nota < 5){
        console.log(aluno.nome + "reprovado")
        listaChamada[indice].situacao="reprovado"
    }else{
        console.log(aluno.nome + "aprovado")
        listaChamada[indice].situacao="aprovado4"
    }}
)
console.log(listaChamada)