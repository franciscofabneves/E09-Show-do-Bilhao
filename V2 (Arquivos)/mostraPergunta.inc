<?php
function mostraPergunta($num, $perguntas){
    if ($num == 20){
        ?>
        <h1>VOCÊ CHEGOU AO FIM!!!</h1>
        <form action="fim.php" method="post">
            <input type="hidden" name="pontos" value="<?= $num ?>">
            <input type="hidden" name="win" value="true">
            <button type="submit">Ver resultados</button>
        </form>
        <?php
    }
    else {
        if ($num != 0){
            $numAnterior = $num-1;
            $resposta = $_POST["$numAnterior"];
            if ($resposta != $perguntas[$numAnterior]->correta) {
            ?>
                <h1>Você errou... :(</h1>
                <form action="fim.php" method="post">
                    <input type="hidden" name="pontos" value="<?= $num-1 ?>">
                    <input type="hidden" name="win" value="false">
                    <button type="submit">Ver resultados</button>
                </form>
                <?php
            }
            else {
                ?>
                <h1><?= $perguntas[$num]->pergunta ?></h1>
                    <FORM name="resposta" method="post" action="perguntas.php?num=<?php echo $num+1?>">
                        <Input type = 'Radio' name = "<?= $num ?>" value=0 required>
                            <?= $perguntas[$num]->alternativas[0] ?>
                            <br>
                        <Input type = 'Radio' name = "<?= $num ?>" value=1 required>
                            <?= $perguntas[$num]->alternativas[1] ?>
                            <br>
                        <Input type = 'Radio' name = "<?= $num ?>" value=2 required>
                            <?= $perguntas[$num]->alternativas[2] ?>
                            <br>
                        <Input type = 'Radio' name = "<?= $num ?>" value=3 required>
                            <?= $perguntas[$num]->alternativas[3] ?>
                            <br>
                        <br>
                        <Input type="submit" value="Próxima!">
                    </FORM>
                    <h2>Pergunta <?= $num+1?> de 20</h2>
                <?php
            }
        }
        else {
            ?>
            <h1><?= $perguntas[$num]->pergunta ?></h1>
                <FORM name="resposta" method="post" action="perguntas.php?num=<?php echo $num+1?>">
                    <Input type = 'Radio' name = "<?= $num ?>" value=0 required>
                        <?= $perguntas[$num]->alternativas[0] ?>
                        <br>
                    <Input type = 'Radio' name = "<?= $num ?>" value=1 required>
                        <?= $perguntas[$num]->alternativas[1] ?>
                        <br>
                    <Input type = 'Radio' name = "<?= $num ?>" value=2 required>
                        <?= $perguntas[$num]->alternativas[2] ?>
                        <br>
                    <Input type = 'Radio' name = "<?= $num ?>" value=3 required>
                        <?= $perguntas[$num]->alternativas[3] ?>
                        <br>
                        <br>
                    <Input type="submit" value="Próxima!">
                </FORM>
                <h2>Pergunta 1 de 20</h2>
        <?php            
        }
    }
}
?>