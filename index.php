<?php
    session_start();
    ob_start();
?>
<!DOCTYPE>
<html>
    <head>
        <title>Bem vindo</title>
    </head>
    <body>
        <h1>BEM VINDO AO SHOW DO BILHÃO</h1>
        <!-- <?php

        if (!$SESSION["login"]){ //Se o usuário já estiver logado
            $login = $_POST["login"];
            $senha = $_POST["senha"];
        }
        else {
            $login = $_SESSION["login"];
            $senha = $_SESSION["senha"];
        }

        if (!$login) header("Location: login.php");
        else{
            $_SESSION["login"] = $login;
            $_SESSION["senha"] = $senha;

            $id = $_COOKIE["id"];
            $lastScore = $_COOKIE["lastScore"];
            $lastDate = $_COOKIE["lastDate"];
        }

        ?> -->
        <p>As regras são claras! Responda às perguntas SEM ERRAR e ganhe UM BILHÃO</p>
        <form method="get" action="perguntas.php?num=0">
            <button type="submit">Começar</button>
        </form>
        <?php include "rodape.inc"; ?>
    </body>
</html>