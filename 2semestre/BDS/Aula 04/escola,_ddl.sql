-- Criando o banco de dados
CREATE DATABASE SistemaAcademico;

-- Selecionando o banco de dados para uso
USE SistemaAcademico;
-- Criando a tabela Aluno
CREATE TABLE Aluno (
    id_aluno INT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    data_nascimento DATE,
    email VARCHAR(100),
    telefone VARCHAR(20)
);

-- Criando a tabela Professor
CREATE TABLE professor (
    id_professor INT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100),
    especialidade VARCHAR(100)
);

-- Criando a tabela Disciplina
CREATE TABLE disciplina (
    id_disciplina INT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    carga_horaria INT
);

-- Criando a tabela Turma
CREATE TABLE turma (
    id_turma INT,
    id_professor INT,
    id_disciplina INT,
    ano_letivo INT,
    semestre INT,
    sala VARCHAR(20),
    PRIMARY KEY (id_turma, id_professor, id_disciplina),
    FOREIGN KEY (id_professor) REFERENCES professor(id_professor),
    FOREIGN KEY (id_disciplina) REFERENCES disciplina(id_disciplina)
);

-- Criando a tabela Matrícula
CREATE TABLE matricula (
    UniqueID INT PRIMARY KEY,
    id_aluno INT,
    id_turma INT,
    data_matricula DATE,
    status VARCHAR(20),
    nota_final DECIMAL(4,2),
    FOREIGN KEY (id_aluno) REFERENCES Aluno(id_aluno),
    FOREIGN KEY (id_turma) REFERENCES turma(id_turma)
);
