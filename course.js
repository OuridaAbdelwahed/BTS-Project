// tableau a une seule dimension

// var inter=new Array(10)
//     cacs=new Array("ali","khalid")                   ;

// // ou

// var inter1=new Array();

// // avec initialisation 

// var inter2=new Array("Printemps","Eté","Automne","Hiver");

// //
// var inter2=new Array(1,2,3,4,5,6,7,8,9);

// // 

// var inter2=new Array("hi",10,"hamide");


// // Ajouter un element a le debut d'Array


// inter2.unshift(" ", 10,);

// // Ajouter un element a la fin d'Array

// inter2.push(" ", 10,);

// // supprimer le derniere  element  d'Array

// inter2.pop();

// // Ajouter ou supprimer ou ecraser element D'Array

// inter2.splice(2,inter2.length-2,10,11,2)

// // supprimer le premiere  element  d'Array

// inter2.shift();

// // reverser les elements de tableau

// inter2.reverse();

// // convertire le tableau en string join(separateur)

// var X=inter2.join("we can type everythings here")

// // Affiche un morceau de tableau

// var tabl1=inter2.slice(1,3);

// // concatenat a lot of tabels

// var tab1=inter2.concat(tabl1);

// // Pour afficher le resultats se forme D'un prompt
 
// prompt(tab1);
//  prompt(X);
//  prompt(tabl1);
//  prompt(inter2);
//  prompt (cacs); // ou alert(inter2);


 // les fonction dans JS 

    // fonction sans valeur de returne et sans argument
    /* Syntax 
                function hamid(){
                    let nom="l3ezwa";
                    document.write(`Bonjour , comment vas-tu ${nom} ? <br>`)
                } */


        function hamid(){
            let nom="l3ezwa";
            document.write(`Bonjour , comment vas-tu ${nom} ? <br>`)
        }

        //  appelle de a fonction ;

        hamid();

        // foncton avec argument 
        // Syntax
            /*
                    function nameOfFonct(argument)

                        let nom="l3ezwa";
                        document.write(`Bonjour , comment vas-tu ${nom} ? <br>`)
                    }
            */

            // appelle de la fonction 

            // nameOfFonct(value);  
            
            
            // foncton avec plusieur argument 
                // Syntax
                    /*
                            function nameOfFonct(arg1,arg2,argN) {

                                let nom="l3ezwa";
                                document.write(`Bonjour , comment vas-tu ${nom} ? <br>`)
                            }
                    */

            // appelle de la fonction 

            // nameOfFonct(value1,value2,valueN);

            
                
                            function expx(X1,X2,X3) {

                            document.write(`Bonjour , comment vas-tu ${X1,X1,X1} ? <br>`)
                            }
            
            expx(" hamid,khalid, le3zawi");


            // fonction avec returne ;

            // exemples

            // function prix(a,b){
            //     if(a>b)
            //         return a;
            //     else
            //         return b;
            // }
            // let x = prompt(`donner le nombre 1`) ;
            // let y = prompt(`donner le nombre 2`) ;
            // document.write(`le plus grand nombre est : ${prix(x,y)}`);

            function price(prixunitaire,nbrarticle){1
                    return prixunitaire*nbrarticle;
            }
            let nbr = prompt(`donner le nombre des article`) ;
            var prixe = 100 ;
            document.write(`la facture totlae est: ${price(prixe,nbr)}MAD`);       
           
            // Function Object

            // Syntax 

            function intel(x,y){
                
                if (intel.arguments.lenght == 2)
                    return -1 ;
                else
                    return x*y ;

            }
            let f  = prompt(`donner un nombre : `)
                z = prompt(`donner un nombre : `);
            document.write(`<br>ma3reftch ${intel(f,z)} <br>`);


            function somme(a){
                if(somme.arguments.lenght != 0)
                    return sommes ;
                else 
                    return y;   

            }
            // a=2;
            // let i;
            // let y ;
            // if (somme = `sommes`){
            //     sommes = 0 ;
            //     for(i= 0; i<somme.arguments.lenght;i++){
            //         sommes = sommes + somme.arguments(i);
            //     }
            // }
            // else {
            //      y = alert (`impossible de faire la somme !!`)
            
            // }
            // document.write(`la sommes = ${somme}`);

                        // // Initialisation du tableau pour stocker les notes
            //     let notes = [];
            //     const nombreEleves = 10;

            //     // Collecte des notes via des boîtes de dialogue
            //     for (let i = 0; i < nombreEleves; i++) {
            //         let note;
            //         do {
            //             note = parseFloat(prompt(`Entrez la note de l'élève ${i + 1} (entre 0 et 20) :`));
            //         } while (isNaN(note) || note < 0 || note > 20); // Validation de la note
            //         notes.push(note);
            //     }

            //     // Calcul des statistiques
            //     const somme = notes.reduce((a, b) => a + b, 0);
            //     const moyenne = somme / nombreEleves;
            //     const noteMin = Math.min(...notes);
            //     const noteMax = Math.max(...notes);
            //     const nombreSupMoyenne = notes.filter(note => note > moyenne).length;

            //     // Affichage des résultats
            //     console.log("Notes des élèves :", notes);
            //     console.log("Moyenne de la classe :", moyenne.toFixed(2));
            //     console.log("Note minimale :", noteMin);
            //     console.log("Note maximale :", noteMax);
            //     console.log("Nombre d'élèves avec une note supérieure à la moyenne :", nombreSupMoyenne);

            //     alert(`Résultats :
            //     - Moyenne : ${moyenne.toFixed(2)}
            //     - Note minimale : ${noteMin}
            //     - Note maximale : ${noteMax}
            //     - Nombre de notes supérieures à la moyenne : ${nombreSupMoyenne}`);


            // exercic1
            // let i;

            // for (i = 20; i >= 0; i--) {
            //     if (i % 2 === 0 && i !== 14) {
            //         document.write(i === 10 ?  100 + `${'<br>'}` : i + `${'<br>'}`);
            //     }
            // }

            // // exercice 2



            // let number ,  binary=0  , q , r , p=1;
                         
            // number = parseInt(prompt("Entrez un nombre entier positif en décimal :"), 10);

            // if (!isNaN(number) && number >= 0) {
            //     binary = number.toString(2);
            //     document.write(`Le nombre ${number} en binaire est : ${binary}`);
            // } else {
            //     alert("Veuillez entrer un entier positif valide.");
            // }

            // autre methode

            // number = prompt("donner un nombre dicimal");
            // q =number ;
            // while(q > 0) {
            //     r=q%2;
            //     q=(q-r)/2;
            //     binary=binary + r*p;
            //     p=p*10;
            // }
            // document.write(binary);

            // //exercic 3

 
                    // let notes = [];
                    // let total = 0;
                    // let i;

                    // for (let i = 0; i < 10; i++) {
                    //     let note = parseFloat(prompt(`Entrez la note de l'élève ${i + 1} :`));
                    //     if (!isNaN(note) && note >= 0 && note <= 20) {
                    //         notes.push(note);
                    //         total += note;
                    //     } else {
                    //         alert("Veuillez entrer une note valide (entre 0 et 20).");
                    //         i--;
                    //     }
                    // }
                    // let moyenne = total / notes.length;


                    // // method des boucles 

                    // let max=notes[0] ;
                    // let min=notes[0] ;

                    // for(i=1; i<notes.length ;i++) {                 
                    //     if(notes[i]>max)
                    //     max=notes[i];
                    // }
                    // for(i=1; i<notes.length ;i++) {
                    //     if(notes[i]<min)
                    //     min=notes[i];
                    // }
                    // document.write(`la plus petite note est: ${min} <br> `);
                    // document.write(`la plus grande note est: ${max}`);


                    // // methode des fonctions


                    // let Min = Math.min(...notes);
                    // let Max = Math.max(...notes);
                    // let superieurMoyenne = notes.filter(note => note > moyenne).length;

                    // console.log(`Moyenne de la classe : ${moyenne}`);
                    // console.log(`Note minimale : ${Min}`);
                    // console.log(`Note maximale : ${Max}`);
                    // console.log(`Nombre d'élèves ayant une note supérieure à la moyenne : ${superieurMoyenne}`);



            //         // exercice 4   

                    
            //         // Matrices A et B
            //         const A = [
            //             [1, 2, 3],
            //             [4, 5, 6],
            //             [7, 8, 9]
            //         ];

            //         const B = [
            //             [9, 8, 7],
            //             [6, 5, 4],
            //             [3, 2, 1]
            //         ];

            //         // 1. Somme et moyenne des éléments de A
            //         let sommeA = 0;
            //         A.forEach(row => row.forEach(value => sommeA += value));
            //         const moyenneA = sommeA / (A.length * A.length);
            //         console.log(`Somme des éléments de A : ${sommeA}`);
            //         console.log(`Moyenne des éléments de A : ${moyenneA}`);

            //         // 2. Somme des lignes et produit des colonnes de A
            //         const sommeLignes = A.map(row => row.reduce((a, b) => a + b, 0));
            //         const produitColonnes = A[0].map((_, colIndex) => 
            //             A.reduce((product, row) => product * row[colIndex], 1)
            //         );
            //         console.log(`Somme de chaque ligne : ${sommeLignes}`);
            //         console.log(`Produit de chaque colonne : ${produitColonnes}`);

            //         // 3. Somme des matrices A et B
            //         const sommeMatrices = A.map((row, i) => 
            //             row.map((value, j) => value + B[i][j])
            //         );
            //         console.log(`Somme des matrices A et B :`, sommeMatrices);

            //         // 4. Produit des matrices A et B
            //         const produitMatrices = Array.from({ length: 3 }, (_, i) => 
            //             Array.from({ length: 3 }, (_, j) => 
            //                 A[i].reduce((sum, _, k) => sum + A[i][k] * B[k][j], 0)
            //             )
            //         );
            //         console.log(`Produit des matrices A et B :`, produitMatrices);
            

            // exercice 1

            // calculer et afficher la surface d'un cercle
        //     function S(rayon) {
        //         const pi=3.14;
        //         let surface = pi* Math.pow(rayon, 2);
        //         document.write(`La surface du cercle de rayon ${rayon} est : ${surface.toFixed(2)}`);
        //     }
        //     var rayon= 5;
        //    S(rayon);


            // exercice 2

                // let notes = [15, 9, 10, 17, 8, 14];
                // let x;
                // function cherche(t, a) { 
                //       x =  false;
                //     for(i=0;i<t.length;i++){
                //             if(t[i] == a)
                //              x = true;
                          
                //     }
                //             return x;
                     
                    // return t.includes(a);
                // }
                // function somme(t) {
                //     return t.reduce((acc, val) => acc + val, 0);
                // let somme;
                //  for(i=0;i<notes.length;i++)
                //      somme+=notes[i];
                //     return somme;
                
                // }
                // function moyenne(t) {
                //     return somme(notes)/notes.length ;
                // }
                // document.write(`${cherche(notes, 9)} <br>`); 
                // document.write(`${cherche(notes, 15)} <br>`); 
                // document.write(`${somme(notes)} <br>`); 
                // document.write(`${moyenne(notes).toFixed(2)}`); 

                        // exercice 3
        // //  vérifier si la réponse est correcte
        //             function isRight(userGuess, randomNumber) {
        //                 return userGuess === randomNumber;
        //             }

        // //   gérer un essai de devinette
        //             function guess() {
        //                 const randomNumber = Math.floor(Math.random() * 11); 
        //                 console.log("Un nombre a été généré entre 0 et 10.");
                        
        //                 let es = 3;
        //                 while (ess > 0) {
        //                     const userGuess = parseInt(prompt(`Devinez le nombre (Essais restants : ${es})`), 10);
                            
        //                     if (isNaN(userGuess) || userGuess < 0 || userGuess > 10) {
        //                         document.write("Veuillez entrer un nombre valide entre 0 et 10.");
        //                         continue;
        //                     }
                            
        //                     if (isRight(userGuess, randomNumber)) {
        //                         document.write("Félicitations ! Vous avez deviné le bon nombre.");
        //                         return;
        //                     } else {
        //                         document.write("Ce n'est pas le bon nombre.");
        //                     }
                            
        //                     es--;
        //                 }
                        
        //                 document.write(`Désolé, vous avez épuisé vos essais. Le nombre était : ${randomNumber}`);
        //             }

        //             guess();





        // exercice 3 from

        const nombre =Math.floor(Math.random()*11);
        alert(nombre);
        function isRight(n){
            return nombre==n;
        }
        function guess(){
            const essai = prompt(`Entrer un nombre : `)* 1 ;
            return isRight(essai);
        }
        let i;
        for(i=0;i,3;i++){
            if(guess()){
                alert(`bravo`);
                break;
            }
            else if(i===2){
                alert(`Vous avez perdu`);
            }
        }
                    // // variable de type string
            // let x="Bonjour tout  Bonjour le monde ";
            // // l'objet string
            // var y=new String("Bonjour tout le monde");           
            // document.write(`${x.length} <br>`);

            // //  les methode

            // document.write(`${x.charAt(0)} <br>`);
            
            // document.write(`${x.charCodeAt(0)} <br>`);
            
            // document.write(`${x.lastIndexOf(`n`)} <br>`);

            // document.write(`${x.search(`n`)} <br>`);

            // document.write(`${x.substring(1,5)} <br>`);

            // document.write(`${x.slice(-5 ,-2)} <br>`);

            // document.write(`${x.substr(4,2)} <br>`);

            // document.write(`${x.concat(` ----- ${y}`)}  !<br>`);

            // document.write(`${x.toUpperCase()} <br>`);

            // document.write(`${x.replace(/bonjour/ig,`hello`)} <br>`);

            // let z = x.split(``);
            // document.write(`${typeof(z[1])} <br>`);


            // exercice

            // let x = prompt(`donner une phrase :   `);
            // let i;
            // let z= x.split(` `);
            // let f;
            // f=z[0];
            // for(i=1;i<z.length;i++){
            //     if(z[i].length>z[0].length){
            //         f=z[i];  
            //     }
              
            //     }
            //   document.write(f);


                        // exrcice 1
        // let  term = "e es e ons ez ent";
        // let pro = "je tu il/elle nous vous ils/elles"
        // let i;
        // let verb = prompt(`Saisir un verbe de 1ere group : `);
        // let radical = verb.substring(0,verb.length-2);
        // term = term.split(" ");
        // pro = pro.split(" ");
        // if(verb.substr(verb.length-2) == `er` ){
        //     for(i=0;i<term.length;i++){
        //         document.write(`${pro[i]} ${radical.concat(term[i])} <br>`);  
        //     }
        // }else{
        //   do{
        //     verb = prompt(`Svp saisir un verbe de 1ere group : `);
        //   }while(verb.substr(verb.length-2) !== `er` );
        // }