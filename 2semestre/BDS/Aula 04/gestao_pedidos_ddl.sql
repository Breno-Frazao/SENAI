-- 1. Criação do Banco de Dados
CREATE DATABASE IF NOT EXISTS gestao_pedidos;

-- 2. Seleção do Banco de Dados
USE gestao_pedidos;

-- 3. Criação da Tabela Cliente
CREATE TABLE Cliente (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    complemento VARCHAR(100),
    numero VARCHAR(20),
    cep VARCHAR(10) NOT NULL
);

-- 4. Criação da Tabela Telefone (Relacionada a Cliente)
CREATE TABLE Telefone (
    id INT AUTO_INCREMENT PRIMARY KEY,
    id_cliente INT NOT NULL,
    numero VARCHAR(20) NOT NULL,
    tipo VARCHAR(20),
    
    -- Chave Estrangeira apontando para Cliente
    CONSTRAINT fk_telefone_cliente FOREIGN KEY (id_cliente) REFERENCES Cliente(id) ON DELETE CASCADE
);

-- 5. Criação da Tabela Produto
CREATE TABLE Produto (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL
);

-- 6. Criação da Tabela Pedido (Relacionada a Cliente e Produto)
CREATE TABLE Pedido (
    id INT AUTO_INCREMENT PRIMARY KEY,
    id_cliente INT NOT NULL,
    id_produto INT NOT NULL,
    quantidade INT NOT NULL,
    valor_unitario DECIMAL(10, 2) NOT NULL,
    
    -- Chaves Estrangeiras apontando para Cliente e Produto
    CONSTRAINT fk_pedido_cliente FOREIGN KEY (id_cliente) REFERENCES Cliente(id),
    CONSTRAINT fk_pedido_produto FOREIGN KEY (id_produto) REFERENCES Produto(id)
);