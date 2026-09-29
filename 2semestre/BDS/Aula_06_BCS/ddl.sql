CREATE DATABASE IF NOT EXISTS amparo_taxi;
USE amparo_taxi;

-- Tabela motorista
CREATE TABLE IF NOT EXISTS motorista (
    id INT(11) AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) not null,
    cpf VARCHAR(15)not null unique,
    cnh VARCHAR(20)not null unique,
    celular VARCHAR(15)not null unique,
    email VARCHAR(100)not null unique,
    obs TEXT,
    status ENUM('ATIVO', 'INATIVO')
);

-- Tabela veiculo
CREATE TABLE IF NOT EXISTS veiculo (
    placa VARCHAR(10) PRIMARY KEY not null, 
    modelo VARCHAR(20) not null,
    marca VARCHAR(20) not null,
    cor VARCHAR(20) not null,
    ano INT(11) not null,
    motorista_id INT(11) not null,
    CONSTRAINT fk_veiculo_motorista FOREIGN KEY (motorista_id) REFERENCES motorista(id)
);

-- Tabela passageiro
CREATE TABLE IF NOT EXISTS passageiro (
    id INT(11) AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) not null,
    cpf VARCHAR(15) not null unique,
    celular VARCHAR(15) not null unique,
    email VARCHAR(100) not null unique,
    obs TEXT,
    status ENUM('ATIVO', 'BANIDO') default ('ATIVO')
);

-- Tabela viagem
CREATE TABLE IF NOT EXISTS viagem (
    id INT(11) AUTO_INCREMENT PRIMARY KEY,
    passageiro_id INT(11) not null,
    placa VARCHAR(10) not null,
    valor DECIMAL(10,2) not null,
    origem VARCHAR(50) not null,
    hora_partida DATETIME not null default(curdate()),
    destino VARCHAR(50) not null,
    hora_chegada DATETIME,
    avaliacao_motorista INT(11),
    avaliacao_passageiro INT(11),
);

ALTER TABLE veiculo ADD CONSTRAINT fk_dirige foreign key (motorista_id) references motorista(id)
ALTER TABLE veiculo ADD CONSTRAINT fk_dirige foreign key (placa) references veiculo(placa)
ALTER TABLE veiculo ADD CONSTRAINT fk_dirige foreign key (passageiro_id) references passageiro(id)

SHOW tables;
DESCRIBE motorista;
DESCRIBE veiculo;
DESCRIBE passageiro;
DESCRIBE viagem;