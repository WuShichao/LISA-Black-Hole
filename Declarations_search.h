void ang2pix_ring( const long nside, double theta, double phi, long *ipix);
void pix2ang_ring( long nside, long ipix, double *theta, double *phi);
double Tmap(double *params, double tdet);
void searchsky(double *params, double *AC, double *EC, double *SN, double Tobs, double Tzero, int N);
void updatesky(int mc, int k, int ll, double *logLx, double **paramx, double *min, double *max, int *who, double *heat, int **av, int **cv, double *AC, double *EC, double *SN, double Tobs, double Tzero, int N, gsl_rng *r);
void spacecraft(double t, double *x, double *y, double *z);
void RAantenna(double *params, int NF, double *TF, double *FF, double *xi, double *FpAR, double *FpAI, double *FcAR, double *FcAI, double *FpER, double *FpEI, double *FcER, double *FcEI);
void timearray(double *params, RealVector *freq, long N, double *TF, AmpPhaseFDWaveform *ap);
double likelihoodFstat(int ll, double *params, int N, double *AC, double *EC, double *SN, double Tobs, double Tzero);
double likelihoodFstatTmax(int ll, double *params, int N, double *AC, double *EC, double *SN, double Tobs, double Tzero);
void ResponseFreq(int ll, double *params, long N, double *AS, double *ES, double Tobs, double Tzero);
void cholesky(double **A, double **C, int N);
void Inverse(double **M, double **IM, int d);
void search(double *params, double *AC, double *EC, double *SN, double Tobs, double Tzero, int N);
void update(int mc, int k, int ll, double *logLx, double **paramx, double *min, double *max, int *who, double *heat, int **av, int **cv, double *AC, double *EC, double *SN, double Tobs, double Tzero, int N, gsl_rng *r);
void instrument_noise(double f, double *SAE, double *SXYZ);
void FisherMax(int ll, double *params, double **Fisher, double Tobs, double Tzero);
void FisherEvec(double **fish, double *ej, double **ev, int d);
void StartStop(int ll, double *params, double Tobs, double tstart, double tstop, double *fstart, double *fstop, double *fr);
double log_likelihood_max(int ll, double *H, double *params, double *SN, int N, double Tobs, double Tzero);
double log_likelihood_max_dual(int ll, double *A, double *E, double *params, double *SN, int N, double Tobs, double Tzero);
void pbt_shift(double *corr, double *corrf, double *data1, double *data2, double *Sn, int n);
void bwlf(double *in, double *out, int fwrv, int M, int n, double s, double f);
void PDwave(int ll, double *wavef, double *params, int N, double Tobs, double Tzero);
void getfreq(double *fnew, double *tf, double t, double fguess, double m1_SI, double m2_SI, double chi1, double chi2, double tc);
void Intrinsic(int ll, double *params, int NF, double *FF, double *TF, double *PF, double *AF, double Tobs, double Tzero);
void SetUp(int ll, double *params, int NFmax, int *NFS, double *FF, double *TF, double *PF, double *AF, double Tobs, double Tzero);
double fourier_nwip(double *a, double *b, double *Sn, int n);
double fourier_nwip_Tshift(double delT, double Tobs, double *a, double *b, double *Sn, int n);
double **double_matrix(int N, int M);
void free_double_matrix(double **m, int N);
double *double_vector(int N);
void free_double_vector(double *v);
int *int_vector(int N);
void free_int_vector(int *v);
int **int_matrix(int N, int M);
void free_int_matrix(int **m, int N);

