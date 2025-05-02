// Sofo Martin
// Montenegro Marcos
// Rodriguez Melisa

#include <iostream>
using namespace std;


int main()
{
  int opcion, escena, final; 
  int vidas, eleccionJugador, eleccionMaquina; // Variables mini juego
  char iniciarJuego;
  bool gameover, salir = false, miniJuego = false;

  do
  {
      gameover = true;
      escena = 0;
      final = 0;


      system("clear");
      do
    {
      // Sistema de validación.
      system("clear");
      cout << R"(
c::::::cccc::ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
c:::::cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
::::cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
:::ccccccccccccccccccccccccccccccccccccccccccccccclllccllccccccccccccccccccccccc
c:ccccccccccccccccccccccccccccllccclllllllcccllccclccccccccccccccccccccccccccccc
cccccccccccccccccccccccclclccccllccccllllllllllllllllccccllcccclcccccccccccccccc
cccccccccccccccccccccclllllccclllccccllllllllllllllc:,;:cllllllccccccccccccccccc
ccccccccccclccccccccccccccccccccc::cclllllcccclllllc:;:clllllcccccllcccccccccccc
ccccccc;,,,:ccclc;,,;cl:,,;clc;,'''',;clll:,,:llc:;,,,,,;:clc;,,,:clc;,,:ccccccc
ccccccc,''',:ccc;''',:l:,',cc;'',;;,'';clc;'';lc;'',;;,'',:lc;''',:lc,'':ccccccc
ccccccc,'''';cc;'''',:l:,',cc,'';cl:;;:cll;'';cc,'':llc;'';cc;'''',cc,'':cclcccc
ccccccc,''''',;''''',cl:'',cl:,'',;::clllc;'';cc,',:lll;'';cc;''''';:,'':ccccccc
ccccccc,'';,'''.,;'',cl:,',cllc:;,''',:llc;'';lc,',:lll;'';cc;'';;'',''':clccccc
ccccccc;'';c;'',::'',cl:,',ccc::cc:;'',cll;'';cc,',:lll;'';cc;'';c;''''';clllccc
ccccccc,'':cc;,:c:,',cl:'',cc,'':cc:'',:ll;'';cc,'';ccc,'';cc;'';cc;'''':ccclccc
ccccccc,'':clc:cl:'',cl:'',cl:,'',,,'';clc;'';cl:,'',,,'';clc;'';clc,''':ccccccc
ccccccc:;;:clllllc;;:clc;;:clcc:;;;;;:cllc:;;:lllc:;;;;::cllc:;;:lllc;;;:clccccc
ccccccclcccccllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllccccccc
cccccccccccccccllllc::::::clllllllccc:;;;;;::cllllllllllllllc::::::cllllllcccccc
cccccccllcclllllllc;''''',cllllllc;,''''''''',;clllllllllllc;''''';clllllllccccc
ccccccccccclcclllc;'''''',cllcll:,'''',,,,,'''',:lllllllllc;'''''',clllllllllccc
ccccccccccccllllc;''''''',cllllc;'''';ccccc;,''';cllllllc:,''''''',clclccccccccl
cccccccccccllll:,''',,''',cllllc,''',clllllc,''',clllllc:,''',,''',clcllcccccccc
cccccccccclclc:,''';:;''',cllllc,''';clllllc,''',cllllc;,''';:,''';clclllccccccc
ccccccccccccc:,''';cc;''',cllllc,''',clllllc;''',clllc;''',;cc,''';clclllccccccc
cccccccccccc;'''';clc;''',:llllc,''',clllllc;''',cllc;''',:clc,''';clccccccccccc
ccccccccclc;'''';:ccc;''',:ccclc,''';clllllc,''',clc,''',;ccc:,''',:cccccccccccc
cccccccccc:''''''',,,'''''',;cl:,''',clllclc,''',cl:''''',,,,''''''',;cccccccccc
c::ccccccc:''''''''''''''''';clc,''',clllclc,''',cl;''''''''''''''''';cccccccccc
ccccccccccc:::::::::;,'''';::clc;'''';:ccc:;'''';clc:::::::::;'''',;::cccccccccc
c:ccccccccccccclccccc;''',:cccccc;''''''',''''';ccclcccccllll:,.'.,cccccccccccc:
c::cccccccccccccccccc;,,,;cccllccc:;,''''''',;:clccccclcclcccc;,,,;ccccccccccc:c
c::cccccccccccccccccccccccccllcccccccc:::::ccccccccccccccccccccccccccccccccccccc
:::::::cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc::c
:::::::ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc:::c
c::::cccccccc::cccccccccccccccccccccccccccccccccccccccccccccccccccccccccc::::c:c
::::::ccc:::::::ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc::::c
::::::::::::::::::cccccc:ccccccccccccccccccccccccccccccccccccccccccc:ccc:::::::c
c:::::::::::::::::::::cc:::::::::::::cccccccccccc::cccccccc:cccccccccc:::::::::c
::::::::::::::ccccccccccc:::::::cccc:cccccccccccccccccccccc:ccccccccc:::cc:::ccc                      
      )" << endl;

      cout << "Menú principal" << endl;
      cout << "1) Iniciar" << endl;
      cout << "2) Historia" << endl;
      cout << "3) Créditos" << endl;
      cout << "4) salir" << endl;
      cin >> opcion;
    } while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4);


    system("clear");
   
    //menú
    switch (opcion)
    {
     case 1:
     cout << "¿Desea comenzar a jugar ? (s/n): ";
     cin >> iniciarJuego;
     if (iniciarJuego == 's')
      {
       escena = 1;
       gameover = false;
      }
      else if (iniciarJuego == 'n')
      {
       cout << "Presione ENTER para volver al menú...";
       cin.ignore().get();
       gameover = true;
      }
     break;
    
     case 2:
     cout << R"(
ddxxxo,,;'...'',,'..................'''',,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,'''''''
ddollc,;:,...',,;,'''..............'''',,,,,,,,'....'''',,,,,,,,,,,,,,,,,,,,,,,,
........''..',,;;,'''''..........''''''',,,,,,..        ..',,,,,,,,,,,,,,,,'''''
          ...,,;;,'''''''.......''''',,,,,,,,..           ..,,,,,,,,,,,'''''''''
       .     .';:;,,'''''.......'''',,;;;;;;'.             .';;,,,,,,,,,,,,,,,,'
       ....   .,:;,,,,,''.....'''',,,;;;;;:;.  ...''..      ';;;;;;;;;;;;,,,,,,,
         ...  .;:;,,,,,,''...'''',,,;;::::::..';;;::;,.    .,;;;;;;;;;;;;;;;;,,,
          ....:c::;;;,,,,'..''''',,,;;::::::;;,'',''',:;'..,;:;;:;;;;;;;;;;;;;;,
        ... .coc::;;;;,,,'.''''',,,,;;:::::::c:.';,..,cdl;;:::::::::::;;;;;;;;;;
        ':;',locc:;;;;;;,''''''',,,,;;:::::::lc;:lo:,;coolc:::::::::::::;;;;;;;;
     ...,cccclolc:;;;;;;,'''''',,,,;;;:::::::cc:;;;;,;cool::::::::::::::::;:;;;;
    ....':cloolcc:;;;;;;;,''''',,,;;:::ccc:;:ccc;'.',;ccloc,'''''''.'......,:;;;
  ..'',:,,:cooc:c:;;:;;;;,'''',,';cclllllol;;:;;c:'.',;:oko'............. .,:;;;
..';;,;c:,,;cc::cc;;::;;;,''',,,';c:cccccc:'....;oc;''cdOk;......';:::::;..,::;;
 ...,:clc;'',:::cc;:::;;;,''',,,,;cc;;,'...   . .lc,..;okl....    ...';c:..,:::;
     .,cl:,'';::cc;;:::;;,''',,,,;c:.           .;:'..,ll,..          .;:..,:::;
       .;c;,,;::c:;;::;;;,''',,,,;c;.           .;c'..;o:...         ..';..,:::;
         ....,;:c:;;;;;;;,''',,,,;:'.            ,;. .,c,..    ..    ...'..;::::
             ...;:;;;;;;;,''',,,,,,.             .'.  .;...    ...   ......;:::;
                .';;;;;;;,''',,,,;'.             ..   ...       ..    ....';:::;
                 .';;;;;;,'',,,,;;.                     .       ..      .,::::;;
                  .;;;;;;,''',,,;;.                     .       .      ..';::;;;
                  .,;;;;;;''',,,;,.                                    ...;:;;;;
                  .';;;;;;''',,,;'.                                   ....,:;;;;
                   .;;;;;;''',,,,.                                      ..';;;;;
                   .,;;;;,''',,,'. .      .                               ';;;;;
                   .';;;;,'''',,....';;;::;'........''''......... ......  .;;;;;
                    ';;,,,'',,,,,';coddddolooollcccc;:lol;........  ..   .';;;;;
                    .',',;;;::;,;coollllcclooooool;''';c:'.          ....,;;,;,,
                    .. .',,''..;loooool:;;;;;:::'. ...'....        .'',,;,,,,,,,
                        ..'.....;lllcc:.                           .,,,,,,,,,,,,
                            .   .,,,,;,...                       . ..,,,,,,,,,,,
                                ..''','.                           .';:;'''',,;;
                                .''',,..                            .....  .,clc
                                .''','.                              .......','.
                               ..''''..                              .,,;;,,;;;;
                     ...........'''''..                              ..'..''''''
                    .'''''.........'..                                .'.';cc:..
                    .'''..............                                .'.',;;;'.
                    .'...     .........                               .........                      
     )" << endl;
     cout << "Trabajabas como conserje para una empresa millonaria un dia de gran revuelo escuchas que tus jefes necesitan una persona para un trabajo muy peligroso pero con una buena paga, tu lo aceptas sin pensarlo esa PC no se va a comprar sola, te dan un documento que en pocas palabras dice que te van a lanzar al espacio a buscar a alguien, luego de eso no recuerdas nada más" << endl;
     cout << "Presione ENTER para volver al menú...";
     cin.ignore().get();
     break;

     case 3:
     cout << R"(
     º          ª            .     .    .      .            ª        º
      -----------------------------------------------------------
     ª      .     ª TP N° 1 IG - CÁTEDRA TIRIGALL      ª      .     ª
      º          ª            .     .    .      .            ª        º
      ª      .     ª       [CRÉDITOS]         ª      .     ª
          MARTIN SOFO - MARCOS MONTENEGRO - MELISA LEILA RODRIGUEZ
       ----------------------------------------------------------- 
      º          ª            .     .    .      .            ª        º                        
     )" << endl;
     cout << "Presione ENTER para volver al menú...";
     cin.ignore().get();
     break;

     case 4:
              cout << "Saliendo del juego...\n";
       salir = true;
     break;
    }




    //juego
     while (!gameover)
     {
       if (escena == 1)
       {
        system("clear");
        cout << R"(
                                         .....                                                                 
                                       ,;.,oc.                                                               
                                   ...'lxd;.. ....',......''.                                            
                                  .':llc:ccldxxddoollllc;;,,,'''......                              
                                 ...''';;;;;cclodxxxxxxddollooodolloolc;,'..                        
                              ....'.....,;;,,;;,,codddxxxxxoolodxdddddxddolc:,..                    
                    ...      .',,'''.. ..;:,.',...,;cldxkkkkxo:coxxkxxddxxxdddol:'.                 
             ...     .;;..     ..',,;:;,,,;,..;,...',:ok0000Oxo::oxkkOkxxkxxxxxxxdc,.               
            .,,.      .,,'.      .codxdoc;,';,..,,,',;:lkKKK00kdlcoxkOOkxkkkOOkkkOOxl;..            
           .,:;.      .:c;.       ,dO00Odc'.cl'...',,,;;ckKKKK0kxocoxkOOOkkkkOOOkkOOko:'..          
           .;c:,      'll:.       ,ok0KKKOl':l,....':;;;:d0KKKK0kxlcdkOOOOkkOO00OkOOOkdc,,'.        
            '::;.    .,lol'      .;okO0000Odloc:;...;:,,,ck00KKKOkdllxOOO0OOO0OOOOO0OOkdc,:;.       
             .,,.     .col,.     .coxxxkxxo:,lo;'. .;;';::dO0000OxxocokOO0OxxkxdxOOkkkkxo:;l:.      
               ....    .;c:'    .,::ccccc;,..:l,......';::d00000OxxoclxO00Oxdoddoxxddxkkdc;lo,      
           ..    .''    ......   ..,,::'',;c:c;;;,,,..;:;:okOOOOkxxxlcx0KKKOdodxdoooodxOxl:ld:.     
          .,.     .,.       ..,;,,;cll;...;c:::c:,'','';clodxkkOkxxxolxkkOOOxlldxddlloxOkoccdl.     
         .;:'.     ....       .cdkkkdc,.  ...'';;...,,..:oolodxkxxxdolodxxxkkkxxkkkkxdxkkdccdl.     
         .::;.     .','.       ,okO00Oxl:,,;:'.,:'..''..;ooooddddddolloooddxdooodddxkkkkOxccoc.     
         .;:;.     .;:;.       'ldkOOOxddoccc'..,cc;',,';clooxkkdddllooloddxxxdclxxxxxkkxoloo:.     
          .,;'     .;::.      .,ldxxxkxoc;,,;'...:l;':c;'.;coxkdoolccc::cc:codoccodxkkxoll:colc;.   
           ....     ';;'.     .;clollc:,...',.. ..''..:;.  ,oxdooo::cc:::;';cllcccloddollooc;,:;.   
                     .''.    ..'';:c,.,,'.....        ':,..:ddoooccc:;:;,;;,:lccllllol::coo;.       
                       ..     .....;,..'..         ..'clooddolllccccccl;,:llllllloolll;cdl'         
                            . .,' .,;'...      ....,lllooddllccccc::cll:cloddoooooo:;:,;,.          
                               ....,,.'..... ..';;:cllllllccc:;:::ccllolllllllllllc,...             
                                   .......''...,:::::cc:::;;;;;;;::::::::::::::::;..                
                                           ....';;,,,,,'''''''''',,,,,,,,,',;,,...                  
                                            ...........       .  .............                        
        )" << endl;

        cout << "Recuperás la conciencia flotando dentro de tu cápsula de escape. La nave nodriza está destruida..." << endl;
        cout << "¿Qué decides hacer? " << endl;
        cout << "1) Verificar el sistema de comunicación" << endl;
        cout << "2) Dormir para ahorrar oxígeno" << endl;
        cout << "Ingrese el número correspondiente a la opción elegida: ";
        cin >> opcion;
        system("clear");




        switch (opcion)
        {
          case 1:
          escena = 2;
          break;


          case 2:
          final = 1;
          break;
          default:
          cout << "Opción no válida." << endl;
          break;
        }
       }


       if (final == 1)
       {
        cout << R"(
        .,,                                   ....                                                 
         .xXx.                                ...;oc.                                               
          ,kXk;.         ...                    ...cl.                                              
           .,:cc,.,:;,,:dkOOkd:.                .,;lOx.                                             
             ....;dOkOkdoddd0WNd.               ;kOkOXo                                             
                 .;llooollccoOKX0o;..;,.        .cddkKXc                      ..                    
                   ....,:looooox0X0kONN0d:.       .:k0XK:            .....     :d,                  
                         .';cc:codook0XNWNKc        :k0X0o:;;:cccc:'.,:::'     .oO;                 
                            .'':ccccccox0XKx'        ;kK00000Okdl:ld:,cc.       .ol.                
                               .,;;:cc:cldoc:;;;cldlclxkxxkxdool,,:cc'.,,.      .';.                
                                 .'ldkO00Od'.:ooolodxdodxxkdcodl,..',,......   ....                 
                               .';:ddx0KXXXOloko:;;;:c:cdol;',;.'. ....     .  ..                   
                       .':loooodOOc;:coxdxkOOkxl,...'c:;ll:,....';....                              
                     .,ccclxkxolc;. ......',cooc....';,';;,.....,;;..                               
                    .,:;,'..';;'.          .;,..  .......... ..,::;..                               
                   .,;'.     ..                   ...        .;cllc,.                               
                 .,;;'.                                     .;clollc,.  ..                          
     .;cc;.......','..                                       .;;;',;.                               
     .,odl,.                                                  ......                       
        )" << endl;
        
        cout << "Dado a tus pocas capacidades de supervivencia y dejarte vencer te secaste como una pasa de uva."<< endl;
        cout << "Presione ENTER para continuar...";
        cin.ignore().get();
        gameover = true;
       }


       if (escena == 2)
       {
         cout << R"(
                                          ..',,'.                                                   
                                        .',,,;::;'..                                                
                                      .',,,,,,,;;;;,'.                                              
                                   ..,,;,,,,,,,,,,,,,,'.                                            
                                 ..,,,'',;:cll:;,',,,'....                                          
                              ..'''......;::cc;'............                                        
                            ..,'... ...........................                                     
                          ..''...     ... ........ ..............                                   
                        ...'......   .....';:::;'..............','..                                
                      .....'.','.. ....',;;:::ccc;'...........'',,;;'.                              
                   .......',:oo;..   .;:c:,,',,';:c;'.........',,,;;::,.                            
                 .......''';ldo;...  'cll;,,',,',:c:,'''......',,,,;;;::,..                         
                ..''...'''';::;'......,cl:,,,,',;:c;',,'......',,,,,,;:clc;..                       
                 .'''.....',,'..........',;:::::;''.''....'...,,,,,,,',;clc:,'.                     
                 ....''....',,............'',,,,'.'..........';,,,,'.....,;:::;'.                   
                  ....'''....................'''............',;;,,...''....';::c:;'.                
                    .....''................................',,,'...''',;,....';clol:,.              
                      ..........................''........',,'...........'.....':lool:,.            
                        ..............................'',,;;,....................',cllc:,.          
                          ............'''''''''''''''''',,,,,,'.......'',,'.........';ccc;,'.       
                            .....'''...'''''........''''',,,,,,,,'....':lc:;,..........,:::;,..     
                              ......'''...''.......',,''',''',,,,,,'...,cl:;,,'..........',;;,,..   
                      ..        .........'..........''''''..''',,,,,,'....'''..............','...   
                      ;ll,.       ......'''...............''''''',,,,,''........................    
                       .,,.  .       ......''...............'''...'''''''...............'.......    
                            'c:;..     ......................'''''..'''''''....................     
                             .;clc;..    .......................,,,''.'''''''.......''.......       
                      .        ..;clc,.    .......................,,,''''''''..............         
                                  ..,::;'..   .....................''''''''..............           
                                      .':c:,..  .......................'''...''........             
                                         .,::;'.............................'........               
                                            .';;'..................................                 
                                               ..'''''...........................                   
                                                   ..,,'.........................                   
                                                      ..........................                    
                                                         .................                          
                                                           ..... .......                        
         )" << endl;
         
         cout << "Verificas el sistema de comunicación pero solo escuchas estática." << endl;
         cout << "¿Qué decides hacer? " << endl;
         cout << "1) Seguir escuchando el comunicador" << endl;
         cout << "2) No me va a vencer esta máquina, voy a golpearla para que funcione" << endl;
         cout << "Ingrese el número correspondiente a la opción elegida: ";
         cin >> opcion;
         system("clear");




         switch (opcion)
         {
           case 1:
           escena = 3;
           break;
          
           case 2:
           final = 2;
           gameover = true;
           break;


           default:
           cout << "Opción no válida." << endl;
           break;
         }
       }




       if (final == 2)
       {
         cout << R"(
                             ..............................................                        
                            .....................................................                   
                        ...............................................................             
                    .....................................................................        
                 ..........................................................................
                ..............................'''''''''''....................................
               ..........................'''',,,,,,,,,,,,,''''.................................
              .......................''',,,;;;::::::::::;;;;,,''''...............................
             .....................''',,;;;::ccclllllllcccc:::;;,,'''..............................
             ...................'',,;;::cclloooddddddddooollcc::;,,''..............................
             .................'',,;;:ccclooddxkkOO00OOkxxxddollc::;,,''.............................
           ..................'',;:::clloodxxk0KXNNWWNXKK00OOxdollc:;;,''...........................
          .................'',,;:ccloxkkkkO0XNWWWWWWWWWWWWWNX0kdolcc:;,,'..........................
          ................'',;::cloxOXNNXXXNNWWWWWWWWWWWWWWWWNKkxdollc;;,'........................
          ...............'',;:ccoxKXXNNNNNNNNWWWWWWWWWWWWWWNNNWNXXKOxoc;,''...................... 
           ..............',;;:coxKNXNNNNNNNNNWWWWWWWWWNNWWNNXNWWWWWWNOl:;,'.....................    
          ..............'',:ldk0XNNNNNNNNNNWWWWWWWWWNXK0KNWNNNNNNNNNNXkl;,'.....................    
          ..............''cxO0XNNXNNNXXNNNWNNNNNNXXK0OOkk0XWWWWWWWNKOKK0o,'....................     
           .............',oKXXNNNNNNNNNNNNWNXXXK00KKOkxxxxk0KNWWWWNXOOXNk;'...................      
           .............',dKKKXNNNNNNNNNNNNNKK0kxkOOkxxxkkolx0NWWWWNNXNN0c'...................      
            .............'cO00KXNNKKKKKKK0OKXOxxxkkkkOO0OdldKNWWWWNNKXWNKOc'................        
             ............':oddxkkdodolldxkkkOxodddoddk0K0Odd0KK000KNXNNNNWO;................        
              ............;lxxllcc:;;;;;:lodolloxdodxkkxkKKOxddllco0NX00K0o'...............         
              .............'cl;,;;''',;;::clol::loodddxk0XXOOd:;;;;oOOOOko,................         
               .............'''..'',,;::::::lllx00000000O00kxl;:::clodxo:,...............           
                 ................',,;;;;:ldxxdOXXOk0NWWWN0xollcllloc,;,'...............             
                  ..............',;;;;;,;cdkkxOX0ocdKNNWWN0Okxoocclc;,,,;;'...........              
                     ........''','''',;:cldkkxO00Oxxxk0NWWXK0d:,,:lc,,,,;c:...........              
                       .............',:cloxkxxkkOKXKOxkKNNNX0xl:;::c:'..............                
                         ...........,;:llclolodxO000OOOxx0XX0kdl:;cxxc'............                 
                          ........',;;:l:',;;:lxOxdodOK0OkkkOkdddlloddc'.........                   
                          ........',,;::,',:lcokdc:clxOOkdl:c::oxdl:;;,........                     
                        ...','',;,.''','',;lxxxxdxkkOkxxdollollx0Odl:,'........                     
       ............   ..';ll:;,,:,.',;,,::;,;c::xKNNNXKxlodkO00KNNNXd:ll;......              ..     
      ..',,,'''.';,'..,oxdllo:',;:loodoclolccclokkxkOkkOkkO0XNNNWWWW0l:cc,.......     ...''.',..    
     ......''...',,,;;:lccoxdloodxkkOOOxdl:;;,';:,'';,,;;:lxOKK0kx0X0d;''''''','.......';:,'''..    
     ..   ..........','';lxxxkOOxoc:::loc,'.................,:ccccll::;;;,;cc:;''.....',;,'......   
.......   ...............':ldxdl;...'..''...............................'...'.........'','........  
         )" << endl;
         
         cout << "Golpeás con tanta fuerza el comunicador, frustrado y al borde del colapso, que las chispas saltan al instante. En cuestión de segundos, el dispositivo comienza a arder y el fuego se extiende rápidamente por el panel de control. Intentás reaccionar, pero es demasiado tarde, la nave explota en una gran bola de fuego." << endl;
         cout << "Presione ENTER para continuar...";
         cin.ignore().get();
       }
           
       if(escena == 3)
       {
         cout << R"(
''''''''''',,,,,,,,,,,,;;;;;;;;;;;;;;;:::::::::::::::::::::::::::::::;;;;;;;;;;;;;;;;,,,,,,,,,''''''
''''''''',,,,,,,,,,;;;;;;;;;;;;;;:::::::::::::::::::::::::::::::::::::::::;;;;;;;;;;;;;,,,,,,,,,,'''
''''''',,,,,,,,,;;;;;;;;;;;;::::::::::::::::::::ccccccccccc::::::::::::::::::;;;;;;;;;;;,,,,,,,,,,,'
'''',,,,,,,,,,,;;;;;;;;;;;::::::::::::::cccccccccccccccccccccccccccc::::::::::::;;;;;;;;;;;;,,,,,,,,
',,,,,,,,,,,;;;;;;;;;;::::::::::::cccccccccccccccccccccccccccccccccccccc::::::::::::;;;;;;;;;,,,,,,,
,,,,,,,,,,;;;;;;;;;:::::::::::ccccccccccccccllllllllllllllllllllccccccccccc:::::::::::;;;;;;;;;,,,,,
,,,,,,,;;;;;;;;;:::::::::::ccccccccccllllllllllllllllllllllllllllllllcccccccccc::::::::::;;;;;;;;,,,
,,,,,,;;;;;;;;;:::::::::ccccccccccllllllllloooooooooooooooooooolllllllllccccccccc::::::::::;;;;;;;;;
,,,,;;;;;;;;;::::::::::cccccccclllllllloooooooooooddddddooooooooooollllllcccccccccc::::::::::;;;;;;;
,,;;;;;;;;;::::::::::ccccccclllllllooooooodddddddddddddddddddddooooooollllllcccccccc::::::::::;;;;;;
;;;;;;;;::::::::::ccccccccclllllllooooodddddddxxxxxxxxxxxxxxdddddddooooolllllllccccccc:::::::::;;;;;
;;;;;;;::::::::::cccccccclllllloooooodddddxxxxxxkkkkkkkkkkxxxxxxdddddooooolllllllccccccc::::::::;;;;
;;;;;;;:::::::::cccccccclllllloooooodl;'':dxkkkkOOOOOOOOOOOkkkxxxxddddoooooollllllcccccccc:::::::;;;
;;;;;;:::::::::ccccccclllllllooooodddc.  .lkkOOO0000KKKK0000OOkkxxxdddddoooooollllllccccccc::::::::;
;;;;;;;::::::::ccccccclllllloooooddddd,  ,xOO00KKKXXXXXXXKKK00OOkkxxxddddooooollllllcccccccc:::::::;
;;;;;;;;::::::::cccccccclllllooooodddd;. .;:d0KKXXNNNWWNNXXKK00Okkxxxdddooooollllllccccccc:::::::;;;
,,;;;;;;;;::::::::ccccccclllllooooodc..     .o0XXNWWWWWWWNXKK00Okkxxdddoooollllllcccccc:::::::::;;;;
,,,,;;;;;;;;::::::::cccccccllllloooo'     ...;kKXNNWWWWWWNXK00OOkxxdddoooollllccccccc::::::;;;;;;;;;
,,,,,,,,;;;;;;;;::::::::ccccccclllll'     .,:'cOKKKXXNNXXK00Okkxxddoooollllccccc:::::::;;;;;;;,,,,,,
'''',,,,,,,,,,;;;;;;;;;;::::::cccccc.      .c;.cOOOO000OOOkkxxddooolllcccc:::::::;;;;;;,,,,,,,,,''''
'''''''''''',,,,,,,,,,;;;;;;;;:::::;.      .:o,'oxxxxxxxxdddooolllcccc:::::;;;;;;;,,,,,,,,''''''''''
.......''''''''''''',,,,,,,,,;;;;;;..      .;c'.;llloooolllllcccc::::;;;;;;;,,,,,,,,''''''''''......
................'''''''''''''''',,'..       ',.....',,:::::;;;;,,,,''''''''.........................
 ...................................        .....'',;:cc:;,''..................................     
...............................'''''.       ,:cldk0KNWWNKkdlc::;;;,,,,,,'''''''''''.................
..............................'''''''.      ':cldkOKNWWN0xlc::;;;,,,,,'''''''.......................
..........................'''''''''',.   .  .:clodxOKNNXOdoc:::;;,,,,,''''''''......................
..............................'''''''.  ..   ':cldxkKXNKOdlc::;,,,,''''''...........................
    ..................................   ..  .;:lodkOK0Okoc;,,,'''..................................
        .    .........................   ..  .,::cldO0OOkdc:;,''''..................................
                   ...................  ....  .,;;:cdk0kdc::;'''''..................................
                                         ...   .....,ldoc'','......................
         )" << endl;
         
         cout << "Justo cuando creías que todo estaba perdido, una débil señal de audio irrumpe en la estática del comunicador. Proviene de un planeta solitario, flotando en el vacío del espacio. Intrigado y sin muchas opciones, decidís cambiar el rumbo y dirigirte hacia él. A medida que te acercás, distinguís una tenue luz en la superficie" << endl;
         cout << "¿Qué decides hacer? " << endl;
         cout << "1) seguir la luz " << endl;
         cout << "2) ignorar la luz y descansar" << endl;
         cout << "Ingrese el número correspondiente a la opción elegida: ";
         cin >> opcion;
         system("clear");
        
        switch(opcion)
        {
          case 1 :
          escena = 4;
          break;
         
          case 2 :
          escena = 5;
          break;
        }
       }
      
       if(escena == 4 || escena == 7)
       {
        cout << R"(
                                                .;,.      
                                           .....    ..                    ''              :0x'      
             ...                            ....',,,'...                  ,,              .cc.      
 .....     ..lkd,.                        .';lodkkkkxxdl'. ..                                       
.,..........;OWKc.                       .;codxkkOOOOkxxo;..                                        
,l;....... ..:oc'.      .':;.           .,;coxkkOO00OOkkxl'.                      .c;.              
.;....''.. ..','. .'.  ..lKO;.         ..,:ldxkkkOOOkkkkxd:..                     'ol.         ..   
            ..'.. ... ...'c:,..        ..';:cloxxolcclodxxo,..                                .l;   
    .                      ....        ....,;,;dxl::;:loddo;;c.                                     
  ....'....                          ....';clc:okkxxdxkkxdl:ll.   .'..    ..        ...             
 .'',;:;''.... .....                 ....,ldxl:oxddxddkkxolld;    .okc.  .lx, ..    .'.   .','.     
 ..''.,;,;,.....','..    ........       ..:ll,.,:clooccclllc;.    .,c;. ..''...;l;.';..  .'lol,.    
   .    ...... ....       ..'...         .';,.';:lllccclool,.       ...  ..  ..,:,..'.. ........    
                          .              ..,,..,:cccloddolc'                  ..   ....  ...  .,c'  
   ..     ... ......                       .,;:clodxxkxoc:::,.                     ...   ...   'c'  
 .............,,...'......... .....         .';clooooc;;:looxl.                         ...   ..    
 .'.....,,::;:c;..';,.  ..','....           .........';lododx:                                      
 .'...';;..':lc;...,'.. ...,..               .'''''',:lodddd:.                                      
   ...''.   ...      ..                   .':lddlccccllool:.                    .    .              
  ..'..             .;c.                .,c:;lodl,...'...                      ...                  
   .....          ......               .cxx:'',colc:'.                                              
   ...     ............               .;cll:,;oxkxdddol;..                                          
                         ..,;::::'..',cxxdc;;lxO0Oko;cdkx;                                          
                        .:loddxddl::::odxxdolccoxxxdc;oxo.                                          
                      .':cccllc::;;;;lxxxoodddl:;,;:,.,c;.                                          
                      .;;:::::;;;,,,,;ldxxdlllol'...                                                
                     .',,;,;;,,,''''''';:ldxdc'.                                                    
                     .''',,,,,,',''''... ..''.                                                      
                     .''''''',,,,'....                                                    .         
                     .'''''',,,''...                                               ..     ..        
                     .''''''.......                                           ..',::,. .....        
                     ...........                                           .';coddol;.   ....       
                      ...                                                  .;cloddoo:.   ... 
        )" << endl;
        
        cout << "Al seguir la luz llegás a lo que parece un bar del viejo oeste en medio del desierto, entrás y unos seres con cabeza de gato vestidos de vaqueros te observan. \n Entre estos seres aparece una figura que reconoces... \n ¡ES ELON MUSK! quien con solo verte te propone un juego de piedra, papel o tijera en donde él apuesta su nave.\n Al parecer no tienes más opción que jugar"<< endl;
        cout << "Presione ENTER para continuar...";
        cin.ignore().get();
        miniJuego = true; 
        system ("clear");
       }
      
       if(escena == 5)
       {
        cout << R"(
....................'...............................................................................
....................................................................................................
.........................'....................................'............''.......................
..........................','............................................','........................
............................,,'........................................','..........................
..............................,,'....................................',,............................
...............'...............,;,'................................,;;'.............................
..............'''...............,;;,'....'''',,,,,;;;,,,,,'''....';;;'..............................
..............'''................,;:;,,,,;;;:::::::cccc::::;;,,,,;:;'...............................
...............''................';;:::::::::ccccc:cccc::::::::;;;;,......   .......................
.........................    ....,,;;::::c::ccccc:::cccc:::::::;;;;,'....     ......................
........................    ...',,;::::::cc:ccccc::clcclc:ccc:::::;;,'...    .......................
........................ . ..',;;;::::::ccc:cclcc::clccccccccc:::::;;;,'.........'..................
................''''........',,;;;;;;::cccc::cllc::cccccccc:::::::;::;,''........','................
.................'''.......''',;;;::::::::c::cclc::ccccc::c::::::::;;,,''''.....''''................
.........................'''',,;;::::::::c::::cc::::ccc:::c::::::::;;;,,''''''......................
.........................''',,,,,;;;:::;;;:;;::::;;;:::;;::;;;;:::;;;;;,,'''........................
........................''''....  ...',,'';,,;::;;;;;:;,;;;'',,'.........'''........................
........................''..     ..;,.......',;;,,,,;;,,''..'.. .;,.     ...'.......................
........................'..      ..:;.  ......',,,,,,,''.....   .:;.      ..........................
....................'....'.              .''..',,;,,,,'..''.              ..........................
.........';,........''...'..              .,'.',;;;;;,'.',.              ...........................
.........',,.......'''....'..             .,,',,;:;;;,,',,.             ..'.........................
.....................''....'...         ...',',;:ccc:;,,,'...         ...'..........................
.......................................''''',,;::cccc:;,,'.'''...............'......................
.......................''.......''',,,;;,,,,,,;:::::::;,,,'',;;,,,'''......''''..'..................
......................'''''.........'',,,,;;,',,,;;;,,'',;;,,,,'..........''''''''..................
.....................'''''''..........',;::;,...........,:::;'..........'''''''''...................
......................'''''''.........',;;;;;'.........,;;;:;,.........''''''''''''.................
..................''..'''''''''.......',,,,,,,,'.....',,,,,,,'.......''''''''''''''.................
......................'''''''''''...........''.... ....''..........''''''''''''..'''................
....................'''''''''',,'''..............   .............''''''''''''''...'''...............
..................''''''''''''''''''..    ..  ........  .. .....''''''''''''''''''''....''..........
...............'''''''''''''''''''','.        .........      ..''''''''''''''''''''.................
................''''''''''''''''''''....        .....       ...'''''''''''''''''''..................
................'....''''''''''''.... ....               ..... ....''''''''''''''...................
....................'''''''''''...    ........         .......    ...''''''''''''...................
....................''''''''''...     .......................      ...'''''''''''...................
.............''....'''''''''''...     ........................     ...'''''''''''''.................
................''''''''''''''...     ........................     ...'''''''''''''''...............
.................''''''''''''.....  ............................  .....'''''''''''''''..............
.....''.......''..'''''''''..............................................'''''''''''................
        )" << endl;
        
        cout << "Mientras descansas, un sonido extraño te despierta. Decidís investigar y, para tu sorpresa, descubres que proviene de una criatura alienígena que te observa en silencio" << endl;
        cout << "¿Qué decides hacer? " << endl;
        cout << "1) Saludarlo" << endl;
        cout << "2) Atacarlo" << endl;
        cout << "3) Preguntarle por la extraña luz" << endl;
        cout << "Ingrese el número correspondiente a la opción elegida: ";
        cin >> opcion;
        system("clear");
       
        switch(opcion)
        {
         case 1 :
          final = 3;
          break;
         
         case 2 :
          final = 4;
          break;
          
         case 3:
          escena = 6;
          break;
        }
       }
      
       if(final == 3)
       {
         cout << R"(
,;;,::;:lodddooooc::cccccccccclc::;;;;;;;;,;;:::ccclllloooooooodoooooooooooolllo
;;;,::;codkOkkOOOdclkkkxxdooooolc::;;;,;;;,;;::ccllloooooooooooooooooooollllcllo
,;,;:::lodoldkOkOxclkOOkkkkkkkxol::;::;;:;,;;:ccllllooodddooollcccccc::::::;;;co
,;,;::coxo,',:okOxclkOOOOOOOOOxoc;::::;;:;,;::clllloodddddl::ccccccllllllolc;;co
;;;::cldkd,',,,:dxclkOOOOO0Oxoc;,;::;:;;;;,;::clloooddddddl;cooddddooooloooc;;co
;;;::coxOx;',,,',::cxkkkkxoc:,,,;cc:;:;;;;,;:cllooddoooollc;cooddddooc:::llc;;co
;;;:cldkOkc''','.',:ccclc:;;,'':ooc:;::;;;,;:cloolc:;,,''''.',,:loooc:;;:clc;;co
;;;:codxxko'...'',;:cllllc::;''ldolc:::;:;,;:cll:,'''''..........,:lcc:;;:::;;co
;;;cloddxkx:'..,,;:ccoollcccc;;odolc:::::;;;:col;,;:ccc::,''.......,::::::::;;co
;,:clccllodo;..',,;::::;:::c:;,colll:;:::;;:cloolldxxkxddl,'........,cccc:c:;;co
;;:lllllloxxd:..'';;'....,::'..,llll:;;;;;;:clooodxxxxxdol;.........':::::::;:lo
;:ccclloxkkkOd;...'::;,'';cl;'':llloc;;;;;;:clolcll::lllllc'........;loooooooooo
;cc:coooddddxkx:'...',;:cc:;;;lddclolc:;;;;:cloolooccclllll;...,'..,lddddddooooo
,:c:cooolodxkkkx:.....';:c:',:dxdllol:;;;;;:cooddoodxxxdlcc:;;,;,.'ldddddddddddd
;:c:cllloddxxxkkl'......',,;coxkdllol:;;;;;:codocccoooolc::::::,.,lddddddoolllod
;:c:cllooooooddo;.......;oodddkkdllol:;;;;;:coddllllcclc:::;;;'.,lddddddxdolcccl
;:cccllloooollc;'''.....,:clloxkdllol:;;;;;:clodolllllc::;,,,,,coddddddxxdoolccc
;;:ccllllcc::;;,,'''......'',,;loclol:;:;;;;cloollolc:;,,,,;;;;:lodddddddollcc::
;;:c:::::cc::;;::;;'..''....'''',:clc:;;;;;;::;;;;;;,,',,;;;;;,,',:clooolc;;::::
;;:c::;,:cc:;;:cccc:;,;,,,''....'';;::::::,'',,''',,::;;;;;:;;;,...',;:c:;,,;:::
clllll;',;,'',:clllc::::;,'',;,...''',;:::;,,,,'',,,;cc;;;;:;;,'....'''''''',:::
oooooo:''''..';cccc:::::;,',lolc;'....';;;;;;;;,,,,,,,:::;:;,,'....'',,,,'''',;,
olooll;.'''...,;;;;;;;;,,'.;c:::;;,,'';;;;;,;,,,,,,,,,,,,,,'''''''.',,,,,,''..''
lllllc,',;,...',,;;;,,,''.',;,,,,,,;,;;;;;,',,,,,,,,,,,,'''''''','',,'',,'''..,,
lllcc;'',;'...',,,,,,,'....,,,,,,;;;;;;;;,,'',',,,,,;,,,'',,,'',,',,'',,,,,'..',
ccc::,'',,'....''',,'''...'',,,;;;:;;;;;;;,'.'',,,,,,,,,,,;;,',,,','.',,,,'....'
cc::;'.'''',.....''''.....'',,;;:::;;;;;,,,'..',,,,,,,,,,;;,',,,,''..',,,''.....
:::;,'.''.',.....'''......'',,;:::,,;;;;,,''..'',,,,,,,,;;,,,,,,,'...'',,'''....
::;;,..,,,,'.....'''......'',;::::;;:cc:;;'.....',,,,,,,,,,,,,,,'....',,,,''....
:;;;,..',;;,'....'''......'',;;;;::coddolc;'.....'',,,,''''',,'''....,,,,,''....
;;;;,'...',;;,''...........'',,;;;:lodollc;''......',,,,'''''''.....,:ccc:;,'...
,,,,,'''....',,;,,''........''',,;coollc:;'''........'',,'''........;ooolc:,'...
''''''..........,;;;,'....'''''.':lllc:;,'''.......''..'''''''......:oollc;,'...
,,,,,''.......'''';::;,'..''''''':llllc;,'.......'.'''''''''''......;lolc:;,....
::::;;,,'....',;;;,,;;;,'.......';clool::,'..........'...........',;:cc::;,'....
llccccc:;,'....',;;,'''''........,:clolc:;'...................',::cccc:;;,'.....
:ccccllccc:;,'...','.......''''''.';cllllc;...............'',;:cccc::;;,,,'.....
,;;;;::::c::;,'............'',,''...,cllolc;..........',;;:ccc::::;,,'''.......'
;;,,,,,,;;;,','............'''''.....,cllllc;'.....';ccllc::;;,,,'''.........',,
,,;,,,,,;;,'','........'..............;cllccc:'..':cllllcc;,,'..............,,,;
         )" << endl;
         
         cout << "El alien, con su cabeza de gato, respondió amigablemente con un uiiai, un saludo común en su cultura. Curiosos el uno del otro, comenzaron a conversar, y pronto descubrieron que tenían mucho en común. El tiempo pasó volando y, sin darse cuenta, se convirtieron en los mejores amigos. Ahora, viven juntos en una cabaña en el planeta" << endl;
         cout << "Presione ENTER para continuar...";
         cin.ignore().get();
         gameover = true;
       }
      
       if(final == 4)
       {
         cout << R"(
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMXxk0KNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMNO,...lXWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMXx:. ..cxk0XWMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMWMNKd;..',:ox0NMMMMMMMMMMMMMMMWNKOOOkk0XWWMMWNNMWOlo0WMM
MMMMMMMMMMMMMMMMMMMMMMMMMMWWW0;....,:cd0KXNNWMMMMMMWWM0:'''..'cokKKNWOxKO:..dWMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0d,...'.,clodxkOKXNNXXXXo.  .  ...'odxXKc;::,;OWMM
MMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMWKo,''.,,',:dkO00OkOOkxdl'..     .;:lOXx:,':OMMMM
MMMMMMW0xdddONMMMMMMMMMMWWWWWMMMWWKOdo:,,,:dOkooxxxxdxOko;..     'odccl;.cXMMMMW
MMMMMMNc ....lKNWNNNNXKKK0000KNWWWMMMWO:,;clc,,,;:ok0Oxo;;c;.  .;dxo,.. ;KMMMMWM
MMMMMMWx.     ,odddxxxdoolc:::ckNWMWNXOocdOOxoc,,;;dxlldc'cd:',;;cc'.  .xMMMMMMM
MMMMMMMNo',,'',...........   ...lXWNkdddoddkOOkdc:,cdl:'.':odc'.,:;,'':kNMMMMMMM
MMMMMMMMXc......             ....lOO000OOxdoloddo:...    .;:'    ..;oONMMMMMMMMM
MMMMMMMMMk.   .,::::clodo.  ......';cokOOOkkd,..'..       .      ,xXWMMMMMMMMMMM
MMMMMMMMMNkccxKWMMMMMMMMWl    ....'lc;,:lloolc.                'dNMWWMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMM0,      ..cO0kolccc,..              ;dXWMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMW0;       ;ddxxxdc'              .oONWWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMNd'    .lkkxdoc'             .lKWMMWWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMWWXx;':xOkkxxxl.           ,dXWMMMWMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMWMMWNXOkOOkkdc;,.       . ..lXMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMWMMWKOOkxdolc'.          ,d0OdOWWMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMWWMXkdlldxl'.   .:oo,. .,oKWMMXxkXMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMWWXkdolc,,'. 'lxXWMWX0xONMMWWWMNOkXWMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMNkc:;''.  ;xXMMMMMMMMMMMMMMMMMMMXKXWMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMWXOxo:.   .lXWWMMMMMMMMMMMMMMMMMMMMNKXWMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMNOxol;.  'xWMMMWMMMMMMMMMMMMMMMMMMMMNKXMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMXOxdc..  ;0WMMMMWMMMMMMMMMMMMMMMMMMMMMWXNMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMNo:lc'  .lXMMMMMMWWMMMMMMMMMMMMMMMMMMMMMWXXWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMNk, .'.  ,kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMX0XWMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMWXd:::ll'.lXWMMMMMMMMMMMMMMMMMMMMMMW0xxkO0KNNXkxK0OkkxxkkkO0XNWM
MMMMMMMMMMMMMMMMWOldkxdl:oXMWWMMMMMMMMMMMMMMMMMMMMWXo;lOXNWMWWxxWNNXK00Okxdddxkk
MMMMMMMMMMMMMMMMWk;','..lXMMMMMMMMMMMMMMMMMMMMMMMMMMNkooooxxdodKMMMMMMMMMMMMMMWN
MMMMMMMMMMMMMMMMMNx::;ckNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWK00OOKNMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMWMMWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMMMMMMMMMMMMMM
         )" << endl;
         
         cout << "Intentás atacar al alien por la espalda, moviéndote sigilosamente para no alertarlo. Sin embargo, al acercarte demasiado, tropezás con una roca y caés al suelo, haciendo que tu casco se rompa al impactar. El aire escapa rápidamente, y antes de poder reaccionar, la falta de oxígeno te consume" << endl;
         cout << "Presione ENTER para continuar...";
         cin.ignore().get();
         gameover = true;
       }
     
      if(escena == 6)
       {
         cout << R"(
cc::ccccccccccccccccccc:cccccc:::::::::::::::;;;;;;;;;;;;;;,,;;,,,,,,'''''''''''
ccccccccccccccccccccccccccccccccc:cc::::::::::;;;;;;;;;;;;;;;;;,,,''............
cccccccccccc;,,;:ccccccccccccccccccc::;,,;::::;;;;;;;;;;;;;;;,'.................
ccccccccccc:,'.',;:cccccccccccccc:::;;,'',:::::;;;;::;;;::;,'...................
ccccccccccc:,''',,,;::::::::::::;;;;;;,,,;:::::;::::::::::;'....................
cccccccclllc,'.',;,,;:::::::::::::;;;,,,;:cc:c::::::::::::;'....................
ccclllcccllc;'...,,;;:cccccllllllc:;,',:ccccccc:::::cc:::::;,...................
ccllllllccll:''.',,;::cclllllooolllc:;;cccccccc:c:::ccc:::::;...................
::::::::cccl:'.'',;;:cclllloooooollllc:cllccccccccccccccccc:,'..................
;;;;,,,;ccll:'.'',,;,'',;clllllolc:;,;:cllllcccccccccccccccc;''....,'...........
;;;;;;,;cccl:'.''','.  ...,:cccc:'....;:ccllcccccccccccccccc:,'....,;'..........
;;;,,,,;ccclc,..'',,'..  ..,:clc,. ..,::ccllllcccccccllllccc:,'''''',,'.........
,,,,,,,;ccccc;....',;;;,,;;::lol:;;;::;:clllllcccclllllllllc;'''''',,'..........
,,,,,,;:clcclc;....'',;::lllc:::cll:;;:cllllllcccllllllllllc:,''''''..'.........
;,,,,,;:clllllc:,'.''''',:clc:,;cl:;;:ccccccclccclllllllllllc;'''''''',;'.......
;,,;,,;;clllllllc:,...''.',,;;;,,;;:cccccclcllccccllllolllllcc,'.'''',;::;;;;;,'
;;;;;;;;cllllllllc;........',;;;;:clllccccccccccccccclllllcccc;......,;;:::;;,,,
;;;;;;;:cllllllllc;'........'',;cccllccccccccccccclllllllccccc;'.....'''''''''''
ccccccclllclllllc:,.......'',;;:ccccccccccccccc:clooodooocccccc:;;,........'''''
lllllllllllllcc:;,''''',,,;;::;;:ccccccccccccc:clodddddoolccccccc:'.......''''''
llllllllccc:;;,,,,,,;;;;;:;:::::::::::cccccccc:coooddddoolcccccc:'....''''',,,''
lccccccc:;,,,;;:;:::::::::c:cccccc::::::::c:c:clloooooooolcc:::,'..''''',,,,,,''
ccccccc;,',;::cc:::::::ccclcccccccccccc:::::c::cccccccccccc:,''.''''',,,,,,,,'',
cccccc:'',;;:::::::cccccclllcllcccccccccc:;::::::cc:;;:c:;,.....'''''',,,,,,,,''
cccccc;'',,;:::;::::ccccllllccccclcccc::::;;::::cc:::::;,.......'''''''',,,,,'''
ccccc:,.',;;;;;;;;::::ccccccccccccccc:;;;;;;::::c:;;;;;'.......'''''''''''''''''
ccccc:'.',;;;;'',,;;:::;;;:ccc:::cccc:,,;;;;:::::;,'','.......''.''..'''''''''''
c::cc;'.',;;;,...',;;;;,,;;:;,,;:cc::;'',;,,;;;;;;,'''..........'......'''''''''
c::::;'.',;;;'....',,;,'''''',;;;;;;;,'',,,''''''''''...........'.......''...'.'
:::::,..',;;;'...'',,,'''',''',,,,,;;,.',,,'....................................
::::;'.'',;;,....'',''...'',''',,,,;;,..'',''...................................
::;;,'.',,,,''....''......'''',,,;;;;'..'',,'...................................
:;;;,.''',,'','...........'',;:::;;;,'...''''...................................
;;;;'...''''''''.......'',;;::::;;;,,'.....'''..................................
;;;,....'''.........'',,,;;;;;;;;;,,''......''..................................
;;;,................'',,,,;;;;;;;;,,'''...'''''.................................
;;;,'...............'',,,,;;;;;;;,,,'''....''''.................................
;;;;,,''''',,,'.....'',,,,,,,,,,,,'''''....''''.................................
;;;,,,,,,,;,,,'....'''',,,,,,,,,,,'''''''...'''.................................
;;,,;;,,,,,,,,....''''',,,,,,,,,,,''''''''...'''...............................
         )" << endl;
         cout << "'Oh, esa la cantina de nuestro lider supremo. LLegó con sus luces brillantes,hizo un saludo extraño y derrocó a nuestro rey. El desgraciado nos obliga a trabajar todo el día sin paga y vivir en esa pequeña cantina, pude escaparme pero mis amigos siguen ahí. Aunque la cerveza es buena, ve a probarla y manda saludos de mi parte :3'" << endl;
         cout << "Presione ENTER para continuar...";
         cin.ignore().get();
         escena = 7;
         system("clear");
       }
       
       
       if(miniJuego == true)
       {
         // Mensaje inicial del juego
         cout << "= PIEDRA, PAPEL O TIJERA CON ELON MUSK =" << endl;
         vidas = 2;
         // Bucle de 3 rondas
         for (int i = 1; i <= 3; i++)
         {
           cout << "Ronda:" << i << " - " << "Vidas:" << vidas << endl;
           cout << "Opciones: 1) Piedra - 2) Papel - 3) Tijera" << "\n ¿Tu elección?: ";
           cin >> eleccionJugador;
           system("clear");

           // Elon Musk (la máquina) elige Papel en rondas 1 y 3, y Tijera en ronda 2
           if (i == 1 || i == 3)
           {
             eleccionMaquina = 2;
           }
           else
           {
             eleccionMaquina = 3;
           }

           // Muestra la elección de Elon
           cout << "Elon Musk eligió: ";
           switch(eleccionMaquina)
           {
            case 1:
            cout << "Piedra.\n";
            break;
         
            case 2:
            cout << "Papel.\n";
            break;
        
            case 3:
            cout << "Tijera.\n";
            break;
           }

          // Compara la elección del jugador con la de la máquina
          if (eleccionJugador == eleccionMaquina)
          {
            // Si son iguales, hay empate
            cout << "Empate. No perdés vida.\n";
            i--;
          }
          // Piedra gana a Tijera,Papel gana a Piedra,Tijera gana a Papel
          else if ((eleccionJugador == 1 && eleccionMaquina == 3) || (eleccionJugador == 2 && eleccionMaquina == 1) || (eleccionJugador == 3 && eleccionMaquina == 2) )
          {
            // Si el jugador gana
            cout << "¡Ganaste esta ronda!\n";
          }
          else
          {
            // Si el jugador pierde, pierde una vida
            cout << "Perdiste esta ronda.\n";
            vidas--;
          }

          // Verifica si el jugador se quedó sin vidas
          if (vidas == 0)
          {
            cout << "Perdiste todas tus vidas. ¡Juego terminado!" << endl;// Termina el juego si no tiene vidas
            final = 6;
            miniJuego = false;
            system ("clear");
          }
        }

          // Si el jugador terminó con al menos 1 vida
          if (vidas > 0)
          {
           cout << "¡Sobreviviste al juego!" << endl;
           final = 5;
           miniJuego = false;
           system ("clear");
          }
       }
       
       if(final == 5)
       {
         cout << R"(
         ::::::::::::::::::::::::::::::::::cc:::ccccccccccccccccccccc:ccccccc::::cccccccc
         :;::::::::;;;;;,,,,;;;:::::::::cc::c:::ccccccccccccccccccc::::;;;;;:::cccccccccc
         :;::::::;,,'..........',,;::::::::ccccccccccccccccccccc:;;,,,,'''''',,;:cccccccc
         :;;::::;'..............'',;::::ccccccccccccccccccccccc;,',,,,,''''''''',;ccccccc
         :;;;::;'..........';::cll:::::cccccccccccccccccccccccc;;;:cc;,,,',,,,,,',:cccccc
         :::::;,..........';clodddlc:::cccccccccccccccccccccccc:;:clc;,,,',,,,,',,;cccccc
         :::::;'.....'...',:clllcccc::ccccccccccccccccccclccccc;;:cllc:;,,,,;;,''';:ccccc
         :::::;,...';;;,',:cllcc::c:::cccccccccccccccccccccccc:,,,:clolccc:;:;,'',;cccccc
         ::::;;;...';;::::ccloollllc::cccccccccccccccccccccccc:;,;:looooolc:c:,'',:cccccc
         :::::;;'...,;:;:::cllllc::cc:ccccccccccccccccccccccc:;;,;:cllooooclll:,,:ccccccc
         :::::;;;'.',,,,;:::ccc:c:::::ccccccccccccccccccccccccc;,,,;:cllolllool::cccccccc
         :::::;;,''',;;,,;,;:cllc::::ccccccccccccccccccccccccccc;,;;;::ccclloooolc:cccccc
         :;::;;,'''',;;,,,,,;::cc::ccccccccccccccccccccccccccccc:;;;;;;;::clooolc:::ccccc
         ;;;;,,,,,,,,,;;,,,,,,,;:::cc::::cc:cccccccccccccccccccc::;;;;,;::coolc:::;:::::c
         ;;,,;;;;;;;,;;;,,,,'.',:::::c::::cccccccccccccccccccccccccc:;,;clooc::::;;;:::::
         ;,,;;::::::;;;,,,,,''',;;::ccccc:cccccccccccccccccccccccc:;,,';cll:;;;;;;;;;::::
         ,,;;;::::::::::;;;,,,,;;;;:::::::cc::::cccccccccccccccc:;,,'''';:;;;;;,,,;;;:::c
         ,,;;;;::;;::::::::;,;::::;;:::::::::::::c:::ccccccccc:;,,,,''',;;;;;;;,,,;;;;::c
         ,,;;;:::;;;::::::::;;::::;;;:::::::::::::::::cccccc:::,,,,,'',,,;;,,,;;,,;,;;:::
         ,,;;;;;;;;;;:::cc:::;::::;;;;::::::::::::::::::::::::;,',,'''',,;,,,,;;;,,,;::::
         ,,;;;;;;;,,,:::::::::;:;;;;;;:::::::::::::::::::::::;,'''''''',,,,,,;;;;,,,;;:::
         ,,,;;::;;;,,;;:::::::;;;;;;;;:::::::::::::::::::::::;'''''..',,,,,,,,;;,'',;;;::
         ,,;;,;;::;;;;;;::::::;;;;;;;,;;::::::::::::::::::::;,'''''.'',,,,,,,;;,,'',;;;;:
         ,,,;;;;;::;;,,;;;;:;;;;;;;;,,;;:::::::::::::::::::;;''''''.','',,,;,;;,,'',,;;;:
         ,,,,;;;;;;;,,,,;;;;;;;;,;;;,,,;;::::;;::::::;:::::;,'''''''''',,,;;,;,,'''',;;;;
         '''',,;;;;;,,,,,,;;;;;,;;,,,,,;;;;;;:;;;;;:;;;;;;;,'..'''''''',,,,,,,,,'''',,;;;
         ''',,,,,;;;;,',,,;;;;;;,;;,,,,;;;;;;;;;;;;;;;;;;,''....''''''',,,,,,,,,'.''',;;;
         '''',,,,,,,,,,,,;,,;;;;,,;,,,,,;;;;:::;;;;;;;;;,,,''....'''''',,,,,,,,,'..',,,;;
         '..''',,,,,;;;;;;;;;;;;;,,,,,,,;:::cc:cc:::;;;;;,,,'....'''''',,,,,,,,''..'',,,;
         ....'''',,,,;;;;;;;;;;;;;;;::;:cl:;:::::cc:::;;;,,''....''''''',,,,,,,''..''',,;
         .....'''''',,,,;;,,;;;;;,;;;;;:ccc::clcc:::;::;,,,''...''''''',,,,,,,'''..''',,;
         .........''''',,',,,,,,,,,,,,,;:::ccccc::::;;;,,''''''''','''',,,,,,,,''...'',,;
         ..............''''''''''''''''',,;;;::::::,'''''',,,,,''''''',,,,,,,,'''..'',,,;
         ..............................''',,,;;;;,,,''',,;;;;;,'''''''',,,,,,,''...'',,,;
         ....................''........''',,,,,,;;,,,,;;;;;;;,'.''''''',,,,,,,''..''',,,;
         ..............................'',,;;;;;;;;;;;;;;;;;;,''''''''',,,,,,,''..',,,;;;
         ..............................''',;;;;;;;;;;;;;;;;;;,'''',''',,,'',,''..'',,,;;;
         ..............................'''',,,;,;;;;;;;;;;;;;,,''',,'',,,''''''..'',,,;;;
         .........''''''''''............''',,,,,;;;;;;;;;;;;;,,'''','',,,,,,,''.'',,,;;;;
         ......''''''''''''''''........',,,,,,,;;;;;;;;;;;;;;,''''',,,,,,,,,,''.',,,,;;;;
         )" << endl;
         
         cout << "Le ganas a Elon Musk en su propio juego. "
         << "Como recompensa, él mismo te entrega las llaves de su Cybertruck volador. "
         << "Como quería regresar a la Tierra pero no tenía ganas de pilotar, vuelven juntos en el vehículo. "
         << "La empresa te felicita por tu excelente desempeño y te obliga a firmar un contrato de confidencialidad. "
         << "Aun así, como te pagaron bien, estás feliz." << endl; 
         cout << "Presione ENTER para volver a menú...";
         cin.ignore().get();
         gameover = true;
       }
    
       if(final == 6)
       {
         
        cout << "Pierdes el juego, pero te negás a rendirte. En un acto impulsivo, golpeás a Elon Musk y le arrebatás las llaves de la Cybertruck voladora para regresar a la Tierra por tu cuent" << endl;
         cout << "Presione ENTER para continuar...";
         cin.ignore().get();
         system("clear");

         cout << R"(
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMMWWWMWMMWWMWWWWWWMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMWWWWWWWMWWWWWWWWMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWN0kdoodxOkk0XNNWWWMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWMWKx:,'','',',;clxKWWMMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMWMMMMMWMMMWMMWWWNOc;,,,,,,,,''''';lOWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMWWX0KXKXXXNNWWWWWM0::oddddddddolllc:;cOWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMWXkl;:::ccllllodxxxl;cddxkkkkOOkkkxxl;;oXMWWWWMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMWNKklllllcc::;;::clc;,:odxxkkkxxxxkkko;,:kWWWWWMWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW
         MWWWMMWWWWWWN0OkxxxxkxdxOkO00XNNNXo':ollldxkdlloxOOk:,:xNMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWW
         NNNXNNNNNNNNKkxxxxxxxxdkKNNNNMMWMNk;;oolccdkxooxkOOkoldONMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWW
         XXXXXNNNNNNNXOxxxxxxxxkKWMMMWMMMMMNkloddoodkkxxkOOOkdoOXWMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWW
         XXXXNNNNNNNNNK000kxox0XWMMMMMMWMWMMXkddollodxxdxkkkkkddKWMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWWWWWWWWWW
         XXXXXNNNWWWMMMMMMWNNWMMMMMMMMMMMMMMWXkdoc:coddddxkkkOdlkWMMMMMMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWW
         XXNNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXkollloxkxxxkkkO0KNMMMMMWWWMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWW
         WWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXxoooddxxxxkOOKNKKWWMMMWWMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMWN0xoooodxk0XXNWNxcx0XNWWMMMMMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXkx0KOOxdokXWWNWWKo;;:cloxk0KXWWMMMWWWMWWMMWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWXOxoc;l0KKO:..;kNNNWWk:;;,,;;;;;:codxOKKNWMWWWWWWWWWWWWWWWWWWWWWWWWW
         MMMMMMMMMMMMMMMMMMMMMMMMMMWNKOxl:,,;,;d0XKd;..:x0XNNKo;;,,,;;;;;;;:;;;::oOKXXNNNNNNNNNNNNNNNNNNNNNNN
         MMMMMMMMMMMMMMMMMMMMMMMMNOdl:,,,,,,,,:x0KK0d,.c0XXXXx:;;,,;,,:c:::;;::;'',;:ldkOOOOOOOOOOOOOOOOOOOOO
         MMMMMMMMMMMMMMMMMMMMMMMWx,',,,,,',,,,;xKKK0l..,xXNN0c;;;,,;;;ldxdxddddl'...';codkOOOkOOOOOOOOOOOOOOO
         MMMMMMMMMMMMMMMMMMMMMMMXl',,,,,,,,,,,;dKXXd'..'oXKOo:;;;,,;;,:llloooc::,..':lllodkOOOOOOOOOOOOOOOOOO
         MMMMMMMMMMMMMMMMMMMMMMMKc''',,,,,,,,,;dKX0c....lKkl:;;;,;;;;,:cloool:,;::;coollldxkkkkkkkkkkkkkkkkkk
         MMMMMMMMMMMMMMMMMMMMMMM0:,'',,,,,,,,,,o0Xk,....lOl;;;,;,;;;;,;;;;;'',,,''',oxxkO0KKKKKKKKKKKKKKKKKKK
         MMMMMMMMMMMMMMMMMMMMMMMO;,,',,,,,,',,':OXo....'co;,;;,,;;;;;;;;;;,.';;;;:;:OWMMMMMMMMMMMMMMMMMMMMMMM
         MMMMMMMMMMMMMMMMMMMMMMMk;,,.',,,,,'''';d0c....',;;;;;,;;;;;;;;;;;'.';;;;;;;oNWWMWMMMMMMMMMMMMMMMMMMM
         MMMMMMMMMMMMMMMMMMMMMMWd,,,..'',,,,'','cx;.....',;;;,,;;;;;;;;;;,...;;;;;:;c0MMMWMMMMMMMMMMMMMMMMMMM
         MMMMMMMMMMMMMMMMMMMMMMXl,,,..'',,'''''',:'.....';;,,,;;;;;;;;;;;,...;;;;;;:;dNWWMMMMMMMMMMMMMMMMMMMM
         MMMMMMMMMMMMMMMMMMMMMMKc',,...'''''''''',.....',;,,,,;;;;;;;;;,,,...,;:;;;;;lKMWMMMMMMMMMMMMMMMMMMMM
         MMMMMMMMMMMMMMMMMMMMWWKc',,...'''''''''','....,,,,,,;;;;;;;;,,,,'...';:;;;;;oXMWMMMMMMMMMMMMMMMMMMMM
         MMMMMMMMMMMMMMMMMMMMMWk;,,'....'''''''''',. ..',,,,;;;;;;;;,,,,''...';:;;;;;oXWWMMMMMMMMMMMMMMMMMMMM
         WWWWWWWWWWMMMMMMMMMMMKc,,''......'''''''''....',,;;;;;;;;;,,,,,''...';:::;;;cKWWMMMMMMMMMMMMMMMMMMMM
         0KKKKKKKKXNWMMMMMMMMWk;,,'''. ....''''''''...',;;;;;;;;;;;;,,,,''....;::::;;cOWWMMMMMMMMMMMMMMMMMMMM
         XXNXXXXXXXNMMMMMMMMMNd,,,,''......''''''''..'',;;;;;;;;;;;;;,,,''....,;:::;;:OWMMMMMMMMMMMMMMMMMMMMM
         )" << endl;
 
         cout << "Al regresar a la oficina, descubrís que las redes sociales están inundadas con la noticia: Elon Musk ha desaparecido. Antes de que puedas explicar lo ocurrido, la empresa decide silenciarte por haber fallado en tu misión. Tu regreso no es celebrado… es ocultado." << endl;
         cout << "Presione ENTER para volver a menú...";
         cin.ignore().get();
         gameover = true;
       }
   }
     
  } while (!salir);

  return 0;
}