--CRUD (Criar, Ler, Atualizar e Deletar)
--DDL (Data definition Language)
--CRUD DDL (create, [Show, Describe], Alter, Drop)

--Criar um banco de dados chamado "pedidos"
CREATE DATABASE pedidos;
--Selecionar o banco de dados "pedidos" para uso
USE pedidos;
--Criar a tabela de Produtos
CREATE TABLE produtos(
    id int primary key not null auto_increment,
    nome varchar(40) not null,
    Describe varchar(200) not null,
    volume decimal(10,2) not null,
    valor decimal(10,2) not null,
);
