const express = require('express');
const router = express.Router();

const { cadastrar, listar, alterar } = require('../controllers/usuario.controllers');

router.post("/cadastrar", cadastrar);
router.get("/listar", listar);
router.put("/alterar/:id", alterar);

module.exports = router;