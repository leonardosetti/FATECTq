/*
Tipo de SO: Linux
Baseada em: Arch
Origem: Austria, France, Germany
Arquitetura: aarch64, x86_64
Ambiente de Desktop: Awesome, bspwm, Budgie, Cinnamon, GNOME, i3, KDE Plasma, LXQt, MATE, Openbox, Xfce
Categoria: Desktop, Live Medium, Raspberry Pi
Status: Ativa
Página Inicial	https://manjaro.org/
Espelhos de Download	https://manjaro.org/download/
Data do primeiro Lançamento	2023-11-07
Data do último Lançamento	2023-11-07
Image Size (MB)	 	3500-3800
Download gratuito	ISO	
Instalação	Graphical	
Ambiente de Desktop Padrão	 	GNOME, KDE Plasma, Xfce	GNOME
Gerenciamento de Pacotes	Flatpak, Pacman, snap
Release Model	Rolling	
Arquitetura de Processador	x86_64	
Init Software	systemd	
Sistemas de Arquivos com Journaling	Btrfs, ext3, ext4, JFS, ReiserFS, XFS
Popularidade: 5 (1,207 acessos por dia)
Average rating 8.1
*/

class DistroLinux {
  constructor(soType, distroBased, origem, arquitetura,desktopEnv, categoria, status, paginaWeb, paginaDownload, releaseDate, imgSize, arqProcessador, pontosAvaliacao) {
    this.soType
    this.distroBased = distroBased;
    this.origem = origem;
    this.arquitetura = arquitetura;
    this.desktopEnv = desktopEnv;
    this.categoria = categoria;
    this.status = status;
    this.paginaWeb = paginaWeb;
    this.paginaDownload = paginaDownload;
    this.releaseDate = releaseDate;
    this.imgSize = imgSize;
    this.arqProcessador = arqProcessador;
    this.pontosAvaliacao = pontosAvaliacao;
  }
}