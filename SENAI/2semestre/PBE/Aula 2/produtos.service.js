const produtos = require("./mockup.produtos");

const cadastrar = (marca, modelo, quantidade, preco) =>{
    let produto = {
        marca,
        modelo,
        quantidade,
        preco
    };

    produtos.push(produto);
};

const listar = () => {
    produtos.forEach((produtos, indice)=> {
            console.log(indice, produto);
    });
};

const buscar = (buscar) =>{
        let resultado = [];

        produtos.forEach((produto) => {
            if(JSON.stringify(produto).toLocaleLowerCase().includes(busca.toLocaleLowerCase())){
                resultado.push(produto);
            }
        });

        //return resultado;
        console.log(resultado);
};

cadastrar("Samsung", "a36", 20, 1800);
listar();
buscar("moto");