/* semparse.c */
void Sem_ParseInitEnglish(void);
void Sem_ParseInitFrench(void);
void Sem_ParseInit(void);
LexEntry *Sem_ParseOfLE(Discourse *dc);
PNode *Sem_ParseOfPN(Discourse *dc);
PNode *Sem_ParseToPN(Discourse *dc);
Obj *Sem_ParseToCanonical1(Obj *in);
Obj *Sem_ParseToCanonical(Obj *obj, Discourse *dc);
void Sem_ParseToCanonicals(ObjList *objs, Discourse *dc);
Obj *Sem_ParseToCanonicalTop(Obj *obj, Discourse *dc);
void Sem_ParseToCanonicalsTop(ObjList *objs, Discourse *dc);
ObjList *Sem_ParseParse(PNode *pn, Discourse *dc);
ObjList *Sem_ParseParse1(PNode *pn, CaseFrame *cf, Discourse *dc);
Obj *Sem_ParseSubjectOf(PNode *pn, Obj *obj);
ObjList *Sem_CartProduct(PNode *pnfrom, PNode *pnto, Obj *from_max, Obj *to_max, CaseFrame *cf, Discourse *dc, Obj *cas, Obj *subjcas, PNode *cas_pn);
ObjList *Sem_ParseParse2_OfIOBJ(PNode *pnfrom, PNode *pnto, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseParse3(PNode *pn, PNode *pnfrom, PNode *pnto, CaseFrame *cf, Discourse *dc, Obj *subjcas);
PNode *BuiltInPrepositionOfPronoun(Obj *pronoun, Discourse *dc);
ObjList *Sem_ParseNominalRelClause(LexEntryToObj *leo, Obj *pronoun, PNode *relative, ObjList *r, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseNonNominalRelClause(PNode *pn, PNode *np, PNode *relative, ObjList *r, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseRelClause(PNode *pn, PNode *np, PNode *relative, CaseFrame *cf, Discourse *dc);
Obj *ObjRestrictionUnroll(Obj *obj, ObjList **props);
ObjList *Sem_ParseGenitive1(Obj *obj, Obj *of_obj, Float score, LexEntryToObj *leo, PNode *pn, Anaphor *anaphors, int iobji, Discourse *dc, ObjList *r);
ObjList *Sem_ParseGenitive(Obj *obj, Obj *of_obj, Float score, LexEntryToObj *leo, PNode *pn, Anaphor *anaphors, Discourse *dc, ObjList *r, int *accepted);
void PNodeRuleOut(Obj *obj, PNode *pn);
ObjList *Sem_ParseWord(PNode *pn, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseConstituent(PNode *pn, CaseFrame *cf, Discourse *dc);
ObjList *Sem_Parse_PrepositionAdjunct1(Float score, Obj *prep, ObjList *args1, Obj *arg2, int is_pred, Discourse *dc);
ObjList *Sem_Parse_PrepositionAdjunct(Float score, LexEntryToObj *leo, LexEntry *le_prep, ObjList *args1, Obj *arg2, int is_pred, Discourse *dc);
ObjList *Sem_ParseThetaMarkingAdjuncts(Float score, LexEntryToObj *leo, ObjList *r, int is_pred, CaseFrame *cf, Discourse *dc);
Bool Sem_ParseSatisfiesSSubcategRestrict(PNode *z, int subcat, Discourse *dc);
Bool Sem_ParseIsImperative(Obj *comptense, int lang);
Obj *Sem_ParseThetaMarking_Pred(LexEntryToObj *leo, int pos, Obj *comptense, Obj *aobj, SP *aobj_sp, CaseFrame *cf, Discourse *dc, Float *args_score, Anaphor **anaphors);
ObjList *Sem_ParseThetaMarking1(Float head_score, LexEntryToObj *head_leo, PNode *head_pn, int pos, Obj *comptense, Obj *aobj, SP *aobj_sp, int epith_pred, ObjList *props, ObjList *rest, CaseFrame *cf, Discourse *dc, int *accepted);
void Sem_ParseCopulaSetTsr(Obj *copula, TsRange *tsr, Discourse *dc);
void Sem_ParseGetCopulaArgs(LexEntryToObj *leo, CaseFrame *cf, Obj **obj, SP *obj_sp, Obj **iobj, SP *iobj_sp);
ObjList *Sem_ParseS_EquativeRole1(Float score, Obj *subj, SP *subj_sp, Obj *parsed_article, Obj *rel, SP *rel_sp, Obj *iobj, SP *iobj_sp, LexEntryToObj *copula_leo, Discourse *dc);
ObjList *Sem_ParseS_EquativeRole(Float score, Obj *subj, SP *subj_sp, Obj *rel, SP *rel_sp, Obj *iobj, SP *iobj_sp, LexEntryToObj *copula_leo, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseCopula(Float head_score, LexEntryToObj *leo, PNode *head_pn, Obj *comptense, ObjList *r, CaseFrame *cf, Discourse *dc, int *accepted);
ObjList *Sem_ParseThetaMarking(Float head_score, LexEntryToObj *head_leo, PNode *head_pn, int pos, Obj *comptense, Obj *aobj, SP *aobj_sp, int epith_pred, ObjList *props, ObjList *r, CaseFrame *cf, Discourse *dc, int *accepted);
Bool Sem_ParseGetRoleIndices(char *features, Obj *rel, int *reli, int *subji, int *iobji, int *nai, int *len, Obj **rel_article);
ObjList *Sem_ParseAdj(PNode *pn, LexEntry *le, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseAdjP(PNode *pn, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseAdvMod(Float score, ObjList *r, PNode *adv, CaseFrame *cf, Discourse *dc);
Float Sem_ParseAdvModAdj(Obj *adv, Float adj_value);
ObjList *Sem_ParseAdvObjMod(ObjList *props, Obj *noun, Float score, LexEntryToObj *leo, SP *bobj_sp, ObjList *r);
ObjList *Sem_ParseIntAdv(Obj *bobj, Float score, ObjList *props, LexEntryToObj *leo, SP *bobj_sp, ObjList *r);
ObjList *Sem_ParseNegAdv(Obj *bobj, Float score, LexEntryToObj *leo, SP *bobj_sp, ObjList *r);
ObjList *Sem_ParseSuperlative(Obj *superlative, Obj *noun, Float noun_score, ObjList *props, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseAdv(PNode *pn, LexEntry *le, char *word, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseConj(PNode *pn, LexEntry *le, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseDeterminer(PNode *pn, Lexitem *lexitem, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseNounAdjuncts(PNode *pn, Float head_score, LexEntryToObj *head_leo, Obj *noun, CaseFrame *cf, Discourse *dc, int *accepted);
Obj *Sem_ParseNounDeterminerWrap(Obj *obj, PNode *pn_obj, Obj *det_parsed, PNode *pn_det, int det_expected, Float inscore, Float *score);
ObjList *Sem_ParseNounDeterminerWraps(ObjList *in, Obj *det_parsed, PNode *pn_det, int det_expected);
ObjList *Sem_ParseNoun(LexEntry *le, PNode *pn, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseAppositive2(ObjList *objs, Obj *noun_abstract, Obj *noun_concrete, ObjList *r, Discourse *dc);
ObjList *Sem_ParseAppositive1(PNode *pn, ObjList *cons1, ObjList *cons2, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseAppositive(PNode *pn, PNode *pn1, PNode *pn2, CaseFrame *cf, Discourse *dc);
Float CommonInflScore(PNode *pn, SP *sp);
Obj *CNCToClass(char *cnc);
Obj *CNFocus(Obj *obj);
Bool CNISA(Obj *class, Obj *obj);
Bool CNIsActor(Obj *obj);
Bool CNISArea(Obj *obj);
Bool CNIsLocation(Obj *obj);
Bool CNIsOccupation(Obj *obj);
ObjList *CNAdd(Obj *prop, Obj *o1, Obj *o2, PNode *pn1, PNode *pn2, Float score, ObjList *r);
Float CNPartScore(Obj *part, Obj *whole);
Bool CNSubjectOf(Obj *action, Obj *subj);
Bool CNObjectOf(Obj *action, Obj *obj);
Bool CNHasObject(Obj *action);
Bool CNEndsIn(PNode *pn, char *suffix);
ObjList *Sem_ParseCompoundNoun_NN1(PNode *pn1, PNode *pn2, Obj *o1, Obj *o2, SP *sp1, SP *sp2, CaseFrame *cf, Discourse *dc, ObjList *r);
ObjList *Sem_ParseCompoundNoun_NN(PNode *pn1, PNode *pn2, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseNP(PNode *pn, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParsePrep(PNode *pn, LexEntry *le, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParsePP(PNode *pn, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParsePronoun1(PNode *pn, LexEntryToObj *leo, Obj *obj, Lexitem *lexitem, ObjList *r, Discourse *dc);
ObjList *Sem_ParsePronoun(PNode *pn, Lexitem *lexitem, Discourse *dc);
Bool ProgressiveIsOK(Obj *obj, char *features);
ObjList *Sem_ParseVerb1(PNode *pn_mainverb, Obj *comptense, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseVerb(PNode *pn, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseVP_Pronoun(PNode *vp, PNode *pronoun, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseVP_Adv(PNode *vp, PNode *adv, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseVP(PNode *pn, CaseFrame *cf, Discourse *dc);
Bool Sem_ParseS1(PNode *pn1, PNode *pn2, CaseFrame *cf, Discourse *dc, ObjList **r);
ObjList *Sem_ParseS(PNode *pn, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseName(PNode *pn, Name *nm, Discourse *dc);
ObjList *Sem_ParseTelno(PNode *pn, Obj *telno, Discourse *dc);
ObjList *Sem_ParseMediaObject(PNode *pn, ObjList *media_obj, Discourse *dc);
ObjList *Sem_ParseProduct(PNode *pn, ObjList *product, Discourse *dc);
ObjList *Sem_ParseNumber(PNode *pn, Obj *number, Discourse *dc);
TsRange *ObjToTsRange_ThroughTense(Obj *obj);
void ObjSetTsRange_ThroughTense(Obj *obj, TsRange *tsr);
void ObjSetTsRangeSpec_ThroughTense(Obj *obj, TsRange *tsr);
ObjList *Sem_ParseTsRange(PNode *pn, TsRange *tsr, CaseFrame *cf, Discourse *dc);
ObjList *Sem_ParseCommunicon(PNode *pn, ObjList *communicons, Discourse *dc);
ObjList *Sem_ParseEmailHeader(PNode *pn, EmailHeader *emh, Discourse *dc);
ObjList *Sem_ParseAttribution(PNode *pn, Attribution *attribution, Discourse *dc);
ObjList *Sem_ParseOther(PNode *pn, LexEntry *le);
ObjList *Sem_ParsePhraseText(char *s, Obj *class, HashTable *ht, ObjList *r, Discourse *dc);
