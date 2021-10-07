/*
génere la liste déroulante des films 
*/
function genererListeFilms() {
    
var idFilm = $(this).val(); 


      
    if (idFilm !== -1) {
        $.getJSON('php/controleur.php',
                {
                    'commande': 'getFilms',
                    'idRegion' : idFilm
                }
        )
                .done(function (donnees, stat, xhr) {

                    $("#films").append($('<option>', {value: -1}).text("Sélectionnez un Film"));
                    $.each(donnees, function (index, ligne) {
                                 
                        $("#films").append($('<option>', {value: ligne.idFilm}).text(ligne.titre));
                    });
                })
                .fail(function (xhr, text, error) {
                    console.log("param : " + JSON.stringify(xhr));
                    console.log("status : " + text);
                    console.log("error : " + error);
                });
    }

}

// met à jour le champ ayant pour id genreFilm en fonction de l'id du film sélectionné
function genereDivGenreFilm()
{
    var idFilm = $(this).val(); // on récupère la valeur de la clef primaire correspondant au film sélectionné


}

$(document).ready(function ()
{
    // generation de la liste deroulante des films
    genererListeFilms();

    // association entre l'événement change sur l'élément ayant pour id films et l'appel de la fonction genererDivGenreFilm


});
