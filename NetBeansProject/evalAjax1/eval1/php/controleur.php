<?php

require_once './fonctions_videotheque.inc.php';
// test de la méthode d'envois des données
if (filter_input(INPUT_SERVER, 'REQUEST_METHOD') === 'GET') {
    // récupération de la donnée 'commande'
    $commande = filter_input(INPUT_GET, 'commande');
    switch ($commande) {
        case 'getFilms' :
            // appel de la fonction retournant la liste des films
            genererListeFilms();
            break;
        case 'getGenre' :
            // récupération de l'id du film
              $idFilm = filter_input(INPUT_GET, 'idFilm', FILTER_VALIDATE_INT);

            // appel de la fonction retournant le genre du film
           genereDivGenreFilm();
            break;       
        default:
            header('Content-Type: application/json');
            echo json_encode("commande inconnue");
    }
}



