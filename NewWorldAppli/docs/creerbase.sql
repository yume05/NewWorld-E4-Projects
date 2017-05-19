drop table if exists typeUtilisateur;
drop table if exists utilisateurs;

create table typeUtilisateur
(idType integer not null auto_increment,
libelle varchar (20) not null,
primary key (idType));

create table utilisateur
(idUtilisateur integer not null auto_increment primary key,
idTypeCompte integer not null references typeUtilisateur (idType),
login varchar (20) not null,
mdp varchar (20) not null,
nom varchar (20) not null,
prenom varchar (20) not null,
adresse varchar (50) not null,
cp varchar (5) not null,
ville varchar (20) not null,
mail varchar (50) not null,
telephone varchar (10) not null,
portable varchar (10) not null);

insert into typeUtilisateur (libelle) values ('admin');
insert into utilisateur (idTypeCompte, login, mdp, nom, prenom, adresse, cp, ville, mail, telephone, portable) values ('1','root','ini01','root','rooti','DominiqueVillars','05000','gap','root@gmail.com','0400000000',
'0600000000');
