<!Doctype>
<html>
    <body>
        <?php include "menu.inc"; ?>
        <h1>RESULTADOS</h1>
        <?php
        if ($_POST["win"]) ?> <h2>PARABÉNS, VOCÊ GANHOU!!!</h2> <?php
        else ?> <h2>Parece que não foi hoje...</h2> <?php
        ?>
        <p>Número de acertos: <?= $_POST["pontos"] ?></p>
        <?php
        echo "Sua última pontuação: ".$_COOKIE["lastScore"];
        $_COOKIE["lastScore"] = $_POST["pontos"];
        echo "Sua última partida: ".date('Y-m-d', $_COOKIE["lastDate"]); 
        $_COOKIE["lastDate"] = time();
        ?>
        <a href="logout.php">Sair</a>
        <?php include "rodape.inc"; ?>
    </body>
</html>