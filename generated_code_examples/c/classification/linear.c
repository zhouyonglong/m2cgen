void assign_array(double source[], double *target, int size) {
    for(int i = 0; i < size; ++i)
        target[i] = source[i];
}
void score(double * input, double * output) {
    assign_array((double[]){((((0.26145874358806076) + ((input[0]) * (0.4247411605356963))) + ((input[1]) * (1.3963906033045022))) + ((input[2]) * (-2.215054318516674))) + ((input[3]) * (-0.9587396176450291)), ((((1.1348839223808753) + ((input[0]) * (0.25679659769994584))) + ((input[1]) * (-1.3904789369835584))) + ((input[2]) * (0.5966830233112762))) + ((input[3]) * (-1.269002272638834)), ((((-1.2162802012560212) + ((input[0]) * (-1.6357766989177105))) + ((input[1]) * (-1.5040638728422817))) + ((input[2]) * (2.4278359331292716))) + ((input[3]) * (2.3469310693367236))}, output, 3);
}
