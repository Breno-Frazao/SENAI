let chocolate = 20
let energético = 30
let coca cola = 10

function calcularTotal(chocolate, energético, coca cola) {
    return chocolate + energético + coca cola
}

function processarCompra(chocolate, energético, coca cola) {
    let total = calcularTotal(chocolate, energético, coca cola)
    return total
}

let total = processarCompra(chocolate, energético, coca cola)

console.log("Preço total da compra foi R$" + total.toFixed(2))

if (total > 200) {
    console.log("A compra falhou. O cartão não passou.")
} else {
    console.log("A compra foi um sucesso. Volte sempre!")
}