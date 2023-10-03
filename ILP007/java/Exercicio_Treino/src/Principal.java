
public class Principal {

	Area area_comercial;
	Area area_projetos;
	Area area_inovacao;
	Area area_ppl;

	Especialidade esp_ti;
	Especialidade esp_eng;
	Especialidade esp_trsp;
	Especialidade esp_logistica;
	Especialidade esp_marketing;
	Especialidade esp_financeiro;

	Atividade atvd_1;
	Atividade atvd_2;
	Atividade atvd_3;
	Atividade atvd_4;
	Atividade atvd_5;
	Atividade atvd_6;
	Atividade atvd_7;
	Atividade atvd_8;

	Executivo exe_inova;
	Executivo exe_mantem;

	Operacional opr_latam;
	Operacional opr_eur;
	Operacional opr_usa;

	Funcionario func_1;
	Funcionario func_2;
	Funcionario func_3;
	Funcionario func_4;
	Funcionario func_5;
	Funcionario func_6;
	Funcionario func_7;
	Funcionario func_8;
	Funcionario func_9;
	Funcionario func_10;
	Funcionario func_11;
	Funcionario func_12;

	Departamento dep_cob;
	Departamento dep_vend;
	Departamento dep_adm;
	Departamento dep_rh;
	Departamento dep_ti;

	public void inputData() {
		area_comercial = new Area();
		area_inovacao = new Area();
		area_projetos = new Area();
		area_ppl = new Area();

		esp_ti = new Especialidade();
		esp_eng = new Especialidade();
		esp_financeiro = new Especialidade();
		esp_logistica = new Especialidade();
		esp_marketing = new Especialidade();
		esp_trsp = new Especialidade();

		atvd_1 = new Atividade();
		atvd_2 = new Atividade();
		atvd_3 = new Atividade();
		atvd_4 = new Atividade();
		atvd_5 = new Atividade();
		atvd_6 = new Atividade();
		atvd_7 = new Atividade();
		atvd_8 = new Atividade();

		exe_inova = new Executivo();
		exe_mantem = new Executivo();

		opr_latam = new Operacional();
		opr_eur = new Operacional();
		opr_usa = new Operacional();

		func_1 = new Funcionario();
		func_2 = new Funcionario();
		func_3 = new Funcionario();
		func_4 = new Funcionario();
		func_5 = new Funcionario();
		func_6 = new Funcionario();
		func_7 = new Funcionario();
		func_8 = new Funcionario();
		func_9 = new Funcionario();
		func_10 = new Funcionario();
		func_11 = new Funcionario();
		func_12 = new Funcionario();

		dep_adm = new Departamento();
		dep_cob = new Departamento();
		dep_rh = new Departamento();
		dep_ti = new Departamento();
		dep_vend = new Departamento();

		atvd_1.setCod_atividade(0);
		atvd_1.setNome_atividade(0);
		atvd_1.setDescricao_atv(null);
		atvd_1.setHoras_demanda(0);
		atvd_1.setDescricao_atv(null);
		atvd_1.setOrcamento(0);
		atvd_1.setMeta_mensal(0);

		atvd_2.setCod_atividade(0);
		atvd_2.setNome_atividade(0);
		atvd_2.setDescricao_atv(null);
		atvd_2.setHoras_demanda(0);
		atvd_2.setDescricao_atv(null);
		atvd_2.setOrcamento(0);
		atvd_2.setMeta_mensal(0);

		atvd_3.setCod_atividade(0);
		atvd_3.setNome_atividade(0);
		atvd_3.setDescricao_atv(null);
		atvd_3.setHoras_demanda(0);
		atvd_3.setDescricao_atv(null);
		atvd_3.setOrcamento(0);
		atvd_3.setMeta_mensal(0);

		atvd_4.setCod_atividade(0);
		atvd_4.setNome_atividade(0);
		atvd_4.setDescricao_atv(null);
		atvd_4.setHoras_demanda(0);
		atvd_4.setDescricao_atv(null);
		atvd_4.setOrcamento(0);
		atvd_4.setMeta_mensal(0);

		atvd_5.setCod_atividade(0);
		atvd_5.setNome_atividade(0);
		atvd_5.setDescricao_atv(null);
		atvd_5.setHoras_demanda(0);
		atvd_5.setDescricao_atv(null);
		atvd_5.setOrcamento(0);
		atvd_5.setMeta_mensal(0);

		atvd_6.setCod_atividade(0);
		atvd_6.setNome_atividade(0);
		atvd_6.setDescricao_atv(null);
		atvd_6.setHoras_demanda(0);
		atvd_6.setDescricao_atv(null);
		atvd_6.setOrcamento(0);
		atvd_6.setMeta_mensal(0);

		atvd_7.setCod_atividade(0);
		atvd_7.setNome_atividade(0);
		atvd_7.setDescricao_atv(null);
		atvd_7.setHoras_demanda(0);
		atvd_7.setDescricao_atv(null);
		atvd_7.setOrcamento(0);
		atvd_7.setMeta_mensal(0);

		atvd_8.setCod_atividade(0);
		atvd_8.setNome_atividade(0);
		atvd_8.setDescricao_atv(null);
		atvd_8.setHoras_demanda(0);
		atvd_8.setDescricao_atv(null);
		atvd_8.setOrcamento(0);
		atvd_8.setMeta_mensal(0);

		esp_eng.setCod_especialidade(null);
		esp_eng.setNome_especialidade(null);
		esp_eng.setNivel(0);
		esp_eng.setTempo_exp(0);
		esp_eng.setAtividade(atvd_1);

		esp_ti.setCod_especialidade(null);
		esp_ti.setNome_especialidade(null);
		esp_ti.setNivel(0);
		esp_ti.setTempo_exp(0);
		esp_ti.setAtividade(atvd_1);

		esp_financeiro.setCod_especialidade(null);
		esp_financeiro.setNome_especialidade(null);
		esp_financeiro.setNivel(0);
		esp_financeiro.setTempo_exp(0);
		esp_financeiro.setAtividade(atvd_1);

		esp_logistica.setCod_especialidade(null);
		esp_logistica.setNome_especialidade(null);
		esp_logistica.setNivel(0);
		esp_logistica.setTempo_exp(0);
		esp_logistica.setAtividade(atvd_1);

		esp_marketing.setCod_especialidade(null);
		esp_marketing.setNome_especialidade(null);
		esp_marketing.setNivel(0);
		esp_marketing.setTempo_exp(0);
		esp_marketing.setAtividade(atvd_1);

		esp_trsp.setCod_especialidade(null);
		esp_trsp.setNome_especialidade(null);
		esp_trsp.setNivel(0);
		esp_trsp.setTempo_exp(0);
		esp_trsp.setAtividade(atvd_1);

		area_comercial.setCod_area("COM-0100");
		area_comercial.setNome_area("Comercial");
		area_comercial.setEspecialidade(esp_financeiro);

		area_inovacao.setCod_area("INV-0101");
		area_inovacao.setNome_area("Inovação");
		area_inovacao.setEspecialidade(esp_ti);

		area_projetos.setCod_area("PRJ-0120");
		area_projetos.setNome_area("Projetos");
		area_projetos.setEspecialidade(esp_eng);

		area_ppl.setCod_area("PPL-0100");
		area_ppl.setNome_area("People");
		area_ppl.setEspecialidade(esp_marketing);

		exe_inova.setArea(area_comercial);
		exe_inova.setProjeto(null);
		exe_inova.setOrcamento(0);

		exe_mantem.setArea(area_comercial);
		exe_mantem.setProjeto(null);
		exe_mantem.setOrcamento(0);

		opr_latam.setArea(area_comercial);
		opr_latam.setProjeto(null);
		opr_latam.setHoras_demanda(0);
		opr_latam.setHoras_alocacao(0);

		opr_eur.setArea(area_comercial);
		opr_eur.setProjeto(null);
		opr_eur.setHoras_demanda(0);
		opr_eur.setHoras_alocacao(0);

		opr_usa.setArea(area_comercial);
		opr_usa.setProjeto(null);
		opr_usa.setHoras_demanda(0);
		opr_usa.setHoras_alocacao(0);

		dep_cob.setCod_departamento(null);
		dep_cob.setNome_departamento(null);
		dep_cob.setArea(area_comercial);
		dep_cob.setResponsavel(null);
		dep_cob.setLocalizacao(null);

		dep_vend.setCod_departamento(null);
		dep_vend.setNome_departamento(null);
		dep_vend.setArea(area_comercial);
		dep_vend.setResponsavel(null);
		dep_vend.setLocalizacao(null);

		dep_adm.setCod_departamento(null);
		dep_adm.setNome_departamento(null);
		dep_adm.setArea(area_comercial);
		dep_adm.setResponsavel(null);
		dep_adm.setLocalizacao(null);

		dep_rh.setCod_departamento(null);
		dep_rh.setNome_departamento(null);
		dep_rh.setArea(area_comercial);
		dep_rh.setResponsavel(null);
		dep_rh.setLocalizacao(null);

		dep_ti.setCod_departamento(null);
		dep_ti.setNome_departamento(null);
		dep_ti.setArea(area_comercial);
		dep_ti.setResponsavel(null);
		dep_ti.setLocalizacao(null);

		func_1.setFunc_id(0);
		func_1.setFunc_nome(null);
		func_1.setCpf(null);
		func_1.setCtps(null);
		func_1.setDepartamento(dep_adm);

		func_2.setFunc_id(0);
		func_2.setFunc_nome(null);
		func_2.setCpf(null);
		func_2.setCtps(null);
		func_2.setDepartamento(dep_adm);

		func_3.setFunc_id(0);
		func_3.setFunc_nome(null);
		func_3.setCpf(null);
		func_3.setCtps(null);
		func_3.setDepartamento(dep_adm);

		func_4.setFunc_id(0);
		func_4.setFunc_nome(null);
		func_4.setCpf(null);
		func_4.setCtps(null);
		func_4.setDepartamento(dep_adm);

		func_5.setFunc_id(0);
		func_5.setFunc_nome(null);
		func_5.setCpf(null);
		func_5.setCtps(null);
		func_5.setDepartamento(dep_adm);

		func_6.setFunc_id(0);
		func_6.setFunc_nome(null);
		func_6.setCpf(null);
		func_6.setCtps(null);
		func_6.setDepartamento(dep_adm);

		func_7.setFunc_id(0);
		func_7.setFunc_nome(null);
		func_7.setCpf(null);
		func_7.setCtps(null);
		func_7.setDepartamento(dep_adm);

		func_7.setFunc_id(0);
		func_7.setFunc_nome(null);
		func_7.setCpf(null);
		func_7.setCtps(null);
		func_7.setDepartamento(dep_adm);

		func_8.setFunc_id(0);
		func_8.setFunc_nome(null);
		func_8.setCpf(null);
		func_8.setCtps(null);
		func_8.setDepartamento(dep_adm);

		func_9.setFunc_id(0);
		func_9.setFunc_nome(null);
		func_9.setCpf(null);
		func_9.setCtps(null);
		func_9.setDepartamento(dep_adm);

		func_10.setFunc_id(0);
		func_10.setFunc_nome(null);
		func_10.setCpf(null);
		func_10.setCtps(null);
		func_10.setDepartamento(dep_adm);

		func_11.setFunc_id(0);
		func_11.setFunc_nome(null);
		func_11.setCpf(null);
		func_11.setCtps(null);
		func_11.setDepartamento(dep_adm);

		func_12.setFunc_id(0);
		func_12.setFunc_nome(null);
		func_12.setCpf(null);
		func_12.setCtps(null);
		func_12.setDepartamento(dep_adm);

	}

	public void outputData() {

		System.out.println("================================================================================");
		System.out.println("");
		System.out.println("--------------------------------------------------------------------------------");
		System.out.println("");
		System.out.println("Funcionário: " + func_1.getFunc_nome());
		System.out.println("CPF: " + func_1.getCpf() + " - CTPS: " + func_1.getCtps());
		System.out.println("ID: " + func_1.getFunc_id() + " - Email: " + func_1.getEmail());
		System.out.println("Departamento: " + func_1.getDepartamento());
		

	}

	public static void main(String args[]) {

		Principal p = new Principal();
		p.inputData();
		p.outputData();

	}

}
